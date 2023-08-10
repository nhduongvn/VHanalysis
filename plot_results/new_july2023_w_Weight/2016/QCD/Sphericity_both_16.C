void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Aug 10 12:25:06 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-4728.593,1.133333,42557.33);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_1 = new TH1D("VbbHcc_both_Sphericity_stack_1","",25,0,1);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(1,28190.38);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(2,36027.37);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(3,23759.73);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(4,21047.29);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(5,13949.79);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(6,10934.35);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(7,10555.11);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(8,5877.891);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(9,4549.865);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(10,7661.492);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(11,4552.058);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(12,5524.807);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(13,2885.488);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(14,2446.413);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(15,4391.664);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(16,1534.406);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(17,1068.105);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(18,1458.276);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(19,64.51962);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(20,130.6533);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(21,26.4945);
   VbbHcc_both_Sphericity_stack_1->SetBinContent(22,40.67625);
   VbbHcc_both_Sphericity_stack_1->SetBinError(1,2217.778);
   VbbHcc_both_Sphericity_stack_1->SetBinError(2,3887.573);
   VbbHcc_both_Sphericity_stack_1->SetBinError(3,3242.974);
   VbbHcc_both_Sphericity_stack_1->SetBinError(4,2877.056);
   VbbHcc_both_Sphericity_stack_1->SetBinError(5,2136.95);
   VbbHcc_both_Sphericity_stack_1->SetBinError(6,2092.98);
   VbbHcc_both_Sphericity_stack_1->SetBinError(7,2056.146);
   VbbHcc_both_Sphericity_stack_1->SetBinError(8,955.2001);
   VbbHcc_both_Sphericity_stack_1->SetBinError(9,797.1514);
   VbbHcc_both_Sphericity_stack_1->SetBinError(10,2516.497);
   VbbHcc_both_Sphericity_stack_1->SetBinError(11,960.5819);
   VbbHcc_both_Sphericity_stack_1->SetBinError(12,1909.092);
   VbbHcc_both_Sphericity_stack_1->SetBinError(13,729.0032);
   VbbHcc_both_Sphericity_stack_1->SetBinError(14,626.1332);
   VbbHcc_both_Sphericity_stack_1->SetBinError(15,1675.628);
   VbbHcc_both_Sphericity_stack_1->SetBinError(16,485.395);
   VbbHcc_both_Sphericity_stack_1->SetBinError(17,432.6337);
   VbbHcc_both_Sphericity_stack_1->SetBinError(18,568.3325);
   VbbHcc_both_Sphericity_stack_1->SetBinError(19,28.98087);
   VbbHcc_both_Sphericity_stack_1->SetBinError(20,51.76601);
   VbbHcc_both_Sphericity_stack_1->SetBinError(21,11.74232);
   VbbHcc_both_Sphericity_stack_1->SetBinError(22,28.88247);
   VbbHcc_both_Sphericity_stack_1->SetEntries(9914);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
