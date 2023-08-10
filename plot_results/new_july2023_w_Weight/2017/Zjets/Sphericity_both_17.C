void Sphericity_both_17()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Aug 10 12:25:07 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-64.01494,1.133333,576.1344);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_4 = new TH1D("VbbHcc_both_Sphericity_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(1,453.5484);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(2,487.7328);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(3,331.5381);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(4,289.7295);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(5,196.4689);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(6,174.203);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(7,149.1451);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(8,117.6807);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(9,107.399);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(10,86.94931);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(11,61.51433);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(12,59.42417);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(13,53.53517);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(14,50.81664);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(15,36.57379);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(16,24.92398);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(17,24.64102);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(18,12.3778);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(19,6.773955);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(20,3.757446);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(21,1.258183);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(22,0.1203054);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(23,0.0907664);
   VbbHcc_both_Sphericity_stack_4->SetBinError(1,14.69546);
   VbbHcc_both_Sphericity_stack_4->SetBinError(2,17.17415);
   VbbHcc_both_Sphericity_stack_4->SetBinError(3,11.86725);
   VbbHcc_both_Sphericity_stack_4->SetBinError(4,12.73501);
   VbbHcc_both_Sphericity_stack_4->SetBinError(5,8.895131);
   VbbHcc_both_Sphericity_stack_4->SetBinError(6,9.125498);
   VbbHcc_both_Sphericity_stack_4->SetBinError(7,9.133978);
   VbbHcc_both_Sphericity_stack_4->SetBinError(8,8.563085);
   VbbHcc_both_Sphericity_stack_4->SetBinError(9,7.872892);
   VbbHcc_both_Sphericity_stack_4->SetBinError(10,7.533061);
   VbbHcc_both_Sphericity_stack_4->SetBinError(11,4.637177);
   VbbHcc_both_Sphericity_stack_4->SetBinError(12,5.077027);
   VbbHcc_both_Sphericity_stack_4->SetBinError(13,3.60713);
   VbbHcc_both_Sphericity_stack_4->SetBinError(14,6.007983);
   VbbHcc_both_Sphericity_stack_4->SetBinError(15,2.903815);
   VbbHcc_both_Sphericity_stack_4->SetBinError(16,2.389565);
   VbbHcc_both_Sphericity_stack_4->SetBinError(17,4.080195);
   VbbHcc_both_Sphericity_stack_4->SetBinError(18,1.645261);
   VbbHcc_both_Sphericity_stack_4->SetBinError(19,1.147028);
   VbbHcc_both_Sphericity_stack_4->SetBinError(20,1.095484);
   VbbHcc_both_Sphericity_stack_4->SetBinError(21,0.6627263);
   VbbHcc_both_Sphericity_stack_4->SetBinError(22,0.1203054);
   VbbHcc_both_Sphericity_stack_4->SetBinError(23,0.0907664);
   VbbHcc_both_Sphericity_stack_4->SetEntries(18216);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity_stack_4->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->Draw("HIST");
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
