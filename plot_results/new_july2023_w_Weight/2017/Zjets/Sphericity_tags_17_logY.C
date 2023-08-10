void Sphericity_tags_17_logY()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Thu Aug 10 12:20:16 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-2.008154,1.133333,3.817766);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLogy();
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_4 = new TH1D("VbbHcc_tags_Sphericity_stack_4","",25,0,1);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(1,907.0371);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(2,730.1763);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(3,388.0683);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(4,264.6813);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(5,158.3558);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(6,77.89547);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(7,37.0264);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(8,21.74333);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(9,18.29625);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(10,13.24404);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(11,8.77613);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(12,7.28924);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(13,5.363672);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(14,5.431613);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(15,2.478003);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(16,2.01829);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(17,1.225606);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(18,1.559924);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(19,0.8091625);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(20,0.1069268);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(21,0.07507035);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(1,20.40355);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(2,21.14126);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(3,14.03978);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(4,13.34892);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(5,8.978001);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(6,5.16591);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(7,2.649092);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(8,2.123469);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(9,1.906391);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(10,1.662398);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(11,1.277159);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(12,1.302854);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(13,0.8512371);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(14,0.9806963);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(15,0.467729);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(16,0.5700267);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(17,0.3125473);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(18,0.5140469);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(19,0.490015);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(20,0.1069268);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(21,0.07507035);
   VbbHcc_tags_Sphericity_stack_4->SetEntries(17505);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Sphericity_stack_4->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}
