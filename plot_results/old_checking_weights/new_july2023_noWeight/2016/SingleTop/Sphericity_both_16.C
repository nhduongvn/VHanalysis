void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Aug  3 12:26:18 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-17.48262,1.133333,157.3436);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,131.8673);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,133.2009);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,111.2385);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,77.77457);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,61.54679);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,44.40271);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,38.72808);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,35.46739);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,29.99675);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,25.42736);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,19.36696);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,17.64965);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,18.83331);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,10.77761);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,11.87175);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,9.990891);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,4.64321);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,5.555754);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,2.245541);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,0.991556);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.453798);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.04373405);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,4.535088);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,4.4025);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,4.154634);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,3.461164);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,3.149022);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,2.600412);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,2.469106);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,2.37422);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,2.217831);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,2.02821);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,1.666229);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,1.693455);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,1.862216);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,1.339524);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,1.483944);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,1.390103);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,0.8269329);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,0.9795159);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.5787871);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.4040875);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.2813042);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.04373405);
   VbbHcc_both_Sphericity_stack_2->SetEntries(10096);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->Draw("HIST");
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
