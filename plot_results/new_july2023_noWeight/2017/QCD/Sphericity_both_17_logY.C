void Sphericity_both_17_logY()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Aug 10 12:33:05 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,0.8021572,1.133333,5.295735);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLogy();
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,27058.97);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,33866.79);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,27631.25);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,18235.96);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,15460.54);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,11772.63);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,9542.716);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,5459.351);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,37053.46);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,5428.269);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,4337.515);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,3422.592);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,2565.901);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,2167.724);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,1469.966);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,1789.967);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,1947.47);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,548.8867);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,470.4633);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,316.4889);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,51.42589);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,35.68988);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(23,290.3847);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,1954.616);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,2372.273);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,2583.18);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,1693.385);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,1555.137);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,1371.639);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,1253.114);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,750.6905);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,20976.39);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,911.2744);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,783.4216);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,679.5712);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,558.6992);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,487.4654);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,398.1794);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,547.0581);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,607.8823);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,98.58976);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,275.0565);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,269.4841);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,25.69162);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,24.08128);
   VbbHcc_both_Sphericity_stack_1->SetBinError(23,269.2187);
   VbbHcc_both_Sphericity_stack_1->SetEntries(10822);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}
