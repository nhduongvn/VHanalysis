void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Aug  3 12:23:34 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-3.227236,1.133333,29.04512);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_8 = new TH1D("VbbHcc_tags_Sphericity_stack_8","",25,0,1);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(1,24.58846);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(2,17.88252);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(3,8.382431);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(4,5.029458);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(5,4.750044);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(6,1.117657);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(7,0.8382431);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(10,0.2794144);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(11,0.5588287);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(12,0.2794144);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(13,0.2794144);
   VbbHcc_tags_Sphericity_stack_8->SetBinContent(20,0.2794144);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(1,2.621139);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(2,2.235315);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(3,1.530415);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(4,1.185455);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(5,1.152055);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(6,0.5588287);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(7,0.4839599);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(10,0.2794144);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(11,0.3951516);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(12,0.2794144);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(13,0.2794144);
   VbbHcc_tags_Sphericity_stack_8->SetBinError(20,0.2794144);
   VbbHcc_tags_Sphericity_stack_8->SetEntries(230);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Sphericity_stack_8->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_8->Draw("HIST");
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
