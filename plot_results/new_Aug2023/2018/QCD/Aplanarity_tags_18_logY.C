void Aplanarity_tags_18_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Tue Aug 22 09:16:30 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-0.01101538,1.133333,6.160737);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLogy();
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,184507);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,19698.59);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,7815.986);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,3348.317);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,1337.095);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,309.0192);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,110.7042);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,38.7964);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,86.85186);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,42.17843);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,8.075881);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,32.92495);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,7053.011);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,2028.613);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,1332.984);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,1063.418);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,568.8197);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,92.27536);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,57.54529);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,16.7997);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,55.71702);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,36.49571);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,8.075881);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,32.92495);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(9459);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
