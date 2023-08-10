void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Aug 10 12:33:06 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-0.3156327,1.133333,5.948118);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLogy();
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,110711.9);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,33838.37);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,29459.96);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,6894.402);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,20491.26);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,3251.347);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,1917.651);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,1615.92);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,949.4346);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,433.7788);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,499.0974);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,357.0798);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,32.38748);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,122.0593);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,4.090463);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,44.36009);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,6.808747);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,4.090463);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,290.3847);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,4216.588);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,2531.43);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,14891.03);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,996.4432);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,14847.31);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,726.4821);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,551.409);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,545.2453);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,389.1047);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,272.1956);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,276.1002);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,271.2808);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,14.2384);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,42.65615);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,4.090463);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,31.21581);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,6.808747);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,4.090463);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,269.2187);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(10822);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
