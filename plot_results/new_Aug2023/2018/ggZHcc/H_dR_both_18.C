void H_dR_both_18()
{
//=========Macro generated from canvas: H_dR_both_18/H_dR_both_18
//=========  (Tue Aug 22 09:22:45 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_18 = new TCanvas("H_dR_both_18", "H_dR_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_18->SetHighLightColor(2);
   H_dR_both_18->Range(-1.2,-0.001584808,6.8,0.01426327);
   H_dR_both_18->SetFillColor(0);
   H_dR_both_18->SetBorderMode(0);
   H_dR_both_18->SetBorderSize(2);
   H_dR_both_18->SetLeftMargin(0.15);
   H_dR_both_18->SetFrameBorderMode(0);
   H_dR_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_12 = new TH1D("VbbHcc_both_H_dR_stack_12","",30,0,6);
   VbbHcc_both_H_dR_stack_12->SetBinContent(3,0.00360772);
   VbbHcc_both_H_dR_stack_12->SetBinContent(4,0.006926576);
   VbbHcc_both_H_dR_stack_12->SetBinContent(5,0.009413139);
   VbbHcc_both_H_dR_stack_12->SetBinContent(6,0.01207473);
   VbbHcc_both_H_dR_stack_12->SetBinContent(7,0.01004411);
   VbbHcc_both_H_dR_stack_12->SetBinContent(8,0.005029217);
   VbbHcc_both_H_dR_stack_12->SetBinContent(9,0.009865882);
   VbbHcc_both_H_dR_stack_12->SetBinContent(10,0.005304311);
   VbbHcc_both_H_dR_stack_12->SetBinContent(11,0.007200755);
   VbbHcc_both_H_dR_stack_12->SetBinContent(12,0.00463775);
   VbbHcc_both_H_dR_stack_12->SetBinContent(13,0.00679472);
   VbbHcc_both_H_dR_stack_12->SetBinContent(14,0.003850447);
   VbbHcc_both_H_dR_stack_12->SetBinContent(15,0.004968328);
   VbbHcc_both_H_dR_stack_12->SetBinContent(16,0.005351431);
   VbbHcc_both_H_dR_stack_12->SetBinContent(17,0.002385016);
   VbbHcc_both_H_dR_stack_12->SetBinContent(18,0.001780684);
   VbbHcc_both_H_dR_stack_12->SetBinContent(19,0.0009953652);
   VbbHcc_both_H_dR_stack_12->SetBinContent(20,0.001300859);
   VbbHcc_both_H_dR_stack_12->SetBinContent(21,0.0003525261);
   VbbHcc_both_H_dR_stack_12->SetBinContent(22,0.0005865502);
   VbbHcc_both_H_dR_stack_12->SetBinContent(23,0.0001322906);
   VbbHcc_both_H_dR_stack_12->SetBinError(3,0.001088066);
   VbbHcc_both_H_dR_stack_12->SetBinError(4,0.001522282);
   VbbHcc_both_H_dR_stack_12->SetBinError(5,0.001741264);
   VbbHcc_both_H_dR_stack_12->SetBinError(6,0.002029463);
   VbbHcc_both_H_dR_stack_12->SetBinError(7,0.00188059);
   VbbHcc_both_H_dR_stack_12->SetBinError(8,0.001321558);
   VbbHcc_both_H_dR_stack_12->SetBinError(9,0.00182787);
   VbbHcc_both_H_dR_stack_12->SetBinError(10,0.001258038);
   VbbHcc_both_H_dR_stack_12->SetBinError(11,0.001531269);
   VbbHcc_both_H_dR_stack_12->SetBinError(12,0.001146885);
   VbbHcc_both_H_dR_stack_12->SetBinError(13,0.001520644);
   VbbHcc_both_H_dR_stack_12->SetBinError(14,0.001076319);
   VbbHcc_both_H_dR_stack_12->SetBinError(15,0.001247601);
   VbbHcc_both_H_dR_stack_12->SetBinError(16,0.001251034);
   VbbHcc_both_H_dR_stack_12->SetBinError(17,0.0008828223);
   VbbHcc_both_H_dR_stack_12->SetBinError(18,0.0007367537);
   VbbHcc_both_H_dR_stack_12->SetBinError(19,0.000580731);
   VbbHcc_both_H_dR_stack_12->SetBinError(20,0.0006607386);
   VbbHcc_both_H_dR_stack_12->SetBinError(21,0.0003525261);
   VbbHcc_both_H_dR_stack_12->SetBinError(22,0.0004147559);
   VbbHcc_both_H_dR_stack_12->SetBinError(23,0.0001322906);
   VbbHcc_both_H_dR_stack_12->SetEntries(330);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_12->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_18->Modified();
   H_dR_both_18->cd();
   H_dR_both_18->SetSelected(H_dR_both_18);
}
