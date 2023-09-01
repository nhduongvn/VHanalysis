#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Fri Sep  1 13:23:42 2023) by ROOT version 6.28/04
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-0.4533485,6.8,4.080136);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR__807 = new TH1D("VbbHcc_both_H_dR__807","",30,0,6);
   VbbHcc_both_H_dR__807->SetBinContent(3,1.712707);
   VbbHcc_both_H_dR__807->SetBinContent(4,3.17388);
   VbbHcc_both_H_dR__807->SetBinContent(5,3.454084);
   VbbHcc_both_H_dR__807->SetBinContent(6,2.961854);
   VbbHcc_both_H_dR__807->SetBinContent(7,2.098538);
   VbbHcc_both_H_dR__807->SetBinContent(8,1.584517);
   VbbHcc_both_H_dR__807->SetBinContent(9,1.10259);
   VbbHcc_both_H_dR__807->SetBinContent(10,1.042646);
   VbbHcc_both_H_dR__807->SetBinContent(11,1.158774);
   VbbHcc_both_H_dR__807->SetBinContent(12,1.504937);
   VbbHcc_both_H_dR__807->SetBinContent(13,2.021253);
   VbbHcc_both_H_dR__807->SetBinContent(14,2.629028);
   VbbHcc_both_H_dR__807->SetBinContent(15,3.289595);
   VbbHcc_both_H_dR__807->SetBinContent(16,3.253728);
   VbbHcc_both_H_dR__807->SetBinContent(17,1.127448);
   VbbHcc_both_H_dR__807->SetBinContent(18,0.3871794);
   VbbHcc_both_H_dR__807->SetBinContent(19,0.1571582);
   VbbHcc_both_H_dR__807->SetBinContent(20,0.0777529);
   VbbHcc_both_H_dR__807->SetBinContent(21,0.05646198);
   VbbHcc_both_H_dR__807->SetBinContent(22,0.02165253);
   VbbHcc_both_H_dR__807->SetBinContent(23,0.01272927);
   VbbHcc_both_H_dR__807->SetBinContent(24,0.005853621);
   VbbHcc_both_H_dR__807->SetBinContent(26,0.002362459);
   VbbHcc_both_H_dR__807->SetBinError(3,0.047773);
   VbbHcc_both_H_dR__807->SetBinError(4,0.06411081);
   VbbHcc_both_H_dR__807->SetBinError(5,0.06672331);
   VbbHcc_both_H_dR__807->SetBinError(6,0.06128533);
   VbbHcc_both_H_dR__807->SetBinError(7,0.05073164);
   VbbHcc_both_H_dR__807->SetBinError(8,0.04367872);
   VbbHcc_both_H_dR__807->SetBinError(9,0.0366897);
   VbbHcc_both_H_dR__807->SetBinError(10,0.03625636);
   VbbHcc_both_H_dR__807->SetBinError(11,0.03783917);
   VbbHcc_both_H_dR__807->SetBinError(12,0.04360231);
   VbbHcc_both_H_dR__807->SetBinError(13,0.05069103);
   VbbHcc_both_H_dR__807->SetBinError(14,0.05782922);
   VbbHcc_both_H_dR__807->SetBinError(15,0.0643414);
   VbbHcc_both_H_dR__807->SetBinError(16,0.06455736);
   VbbHcc_both_H_dR__807->SetBinError(17,0.03763627);
   VbbHcc_both_H_dR__807->SetBinError(18,0.02263192);
   VbbHcc_both_H_dR__807->SetBinError(19,0.01423781);
   VbbHcc_both_H_dR__807->SetBinError(20,0.009600088);
   VbbHcc_both_H_dR__807->SetBinError(21,0.008752884);
   VbbHcc_both_H_dR__807->SetBinError(22,0.005360778);
   VbbHcc_both_H_dR__807->SetBinError(23,0.004277685);
   VbbHcc_both_H_dR__807->SetBinError(24,0.002668677);
   VbbHcc_both_H_dR__807->SetBinError(26,0.001693523);
   VbbHcc_both_H_dR__807->SetEntries(28807);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR__807->SetFillColor(ci);
   VbbHcc_both_H_dR__807->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR__807->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR__807->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__807->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__807->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__807->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__807->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__807->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__807->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__807->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__807->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
