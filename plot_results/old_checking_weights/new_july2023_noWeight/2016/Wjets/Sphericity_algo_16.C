void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug  3 12:24:51 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-347.9118,1.133333,3131.206);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_5 = new TH1D("VbbHcc_algo_Sphericity_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(1,2650.756);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(2,2304.793);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(3,1383.146);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(4,789.0743);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(5,341.2042);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(6,166.9385);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(7,64.51197);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(8,11.62868);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(9,10.87706);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(10,4.365744);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(11,3.320967);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(12,9.355286);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(13,0.9495643);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(14,1.124291);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(15,0.6092824);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(16,0.2054878);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(17,0.09023364);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(18,0.0002136538);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(19,0.146767);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(1,65.07313);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(2,64.2862);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(3,51.66594);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(4,35.80145);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(5,18.005);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(6,13.38075);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(7,11.5999);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(8,1.655564);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(9,6.153535);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(10,1.111562);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(11,1.553512);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(12,6.266336);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(13,0.5297261);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(14,0.5513944);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(15,0.2715373);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(16,0.1186792);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(17,0.06335267);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(18,0.0002136538);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(19,0.146767);
   VbbHcc_algo_Sphericity_stack_5->SetEntries(71986);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity_stack_5->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
