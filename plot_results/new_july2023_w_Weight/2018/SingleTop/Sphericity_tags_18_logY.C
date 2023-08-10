void Sphericity_tags_18_logY()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Aug 10 10:41:10 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-1.644428,1.133333,3.449872);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLogy();
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,460.1435);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,344.1312);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,202.7696);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,125.9472);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,75.21809);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,40.49356);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,24.08277);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,13.70853);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,11.97893);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,8.719571);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,6.175536);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,4.974757);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,3.509796);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,2.249846);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,2.288526);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,1.201592);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,1.318742);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.7047821);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.1465657);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(20,-0.05654178);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,9.891311);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,8.446895);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,6.739884);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,5.192972);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,4.088253);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,3.103618);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,2.280001);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,1.709116);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,1.696639);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,1.526786);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,1.147744);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,1.099839);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.8635141);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.6287038);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.7846079);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.4351424);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.517419);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.4261212);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.08514249);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(20,0.05654178);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(14154);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->Draw("HIST");
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
