void Sphericity_tags_18_logY()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Aug 10 12:20:17 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,0.7862516,1.133333,5.647254);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLogy();
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,76490);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,67923.48);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,39317.93);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,23690.03);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,13271.29);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,8066.042);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,5087.188);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,2118.698);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,1059.542);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,830.616);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,954.622);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,377.6876);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,361.6666);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,54.98921);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,215.4612);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,245.2716);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,131.3751);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,37.44396);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,64.0697);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,4415.244);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,4747.021);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,3088.011);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,2272.651);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,1870.097);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,1349.986);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,1133.6);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,573.1309);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,443.5613);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,166.7725);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,428.5266);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,94.68741);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,93.25485);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,22.76984);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,74.71704);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,73.17114);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,60.54411);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,17.61877);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,37.30926);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(10038);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
