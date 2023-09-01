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
   H_dR_both_16->Range(-1.2,-24.7766,6.8,222.9893);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR__802 = new TH1D("VbbHcc_both_H_dR__802","",30,0,6);
   VbbHcc_both_H_dR__802->SetBinContent(2,0.02978759);
   VbbHcc_both_H_dR__802->SetBinContent(3,70.53814);
   VbbHcc_both_H_dR__802->SetBinContent(4,103.4615);
   VbbHcc_both_H_dR__802->SetBinContent(5,88.74396);
   VbbHcc_both_H_dR__802->SetBinContent(6,77.15799);
   VbbHcc_both_H_dR__802->SetBinContent(7,74.44663);
   VbbHcc_both_H_dR__802->SetBinContent(8,73.29655);
   VbbHcc_both_H_dR__802->SetBinContent(9,93.91495);
   VbbHcc_both_H_dR__802->SetBinContent(10,91.08776);
   VbbHcc_both_H_dR__802->SetBinContent(11,110.564);
   VbbHcc_both_H_dR__802->SetBinContent(12,130.7459);
   VbbHcc_both_H_dR__802->SetBinContent(13,127.0979);
   VbbHcc_both_H_dR__802->SetBinContent(14,143.1655);
   VbbHcc_both_H_dR__802->SetBinContent(15,188.774);
   VbbHcc_both_H_dR__802->SetBinContent(16,171.0366);
   VbbHcc_both_H_dR__802->SetBinContent(17,81.84942);
   VbbHcc_both_H_dR__802->SetBinContent(18,61.18662);
   VbbHcc_both_H_dR__802->SetBinContent(19,31.30895);
   VbbHcc_both_H_dR__802->SetBinContent(20,19.43161);
   VbbHcc_both_H_dR__802->SetBinContent(21,18.88547);
   VbbHcc_both_H_dR__802->SetBinContent(22,9.577967);
   VbbHcc_both_H_dR__802->SetBinContent(23,5.332154);
   VbbHcc_both_H_dR__802->SetBinContent(24,1.131587);
   VbbHcc_both_H_dR__802->SetBinContent(25,0.7145986);
   VbbHcc_both_H_dR__802->SetBinContent(26,0.3730164);
   VbbHcc_both_H_dR__802->SetBinContent(27,0.09253517);
   VbbHcc_both_H_dR__802->SetBinContent(28,0.0599265);
   VbbHcc_both_H_dR__802->SetBinError(2,0.02978759);
   VbbHcc_both_H_dR__802->SetBinError(3,3.199287);
   VbbHcc_both_H_dR__802->SetBinError(4,5.588071);
   VbbHcc_both_H_dR__802->SetBinError(5,4.358391);
   VbbHcc_both_H_dR__802->SetBinError(6,5.651827);
   VbbHcc_both_H_dR__802->SetBinError(7,6.040109);
   VbbHcc_both_H_dR__802->SetBinError(8,6.599746);
   VbbHcc_both_H_dR__802->SetBinError(9,7.930496);
   VbbHcc_both_H_dR__802->SetBinError(10,7.490207);
   VbbHcc_both_H_dR__802->SetBinError(11,7.573209);
   VbbHcc_both_H_dR__802->SetBinError(12,9.002317);
   VbbHcc_both_H_dR__802->SetBinError(13,6.719702);
   VbbHcc_both_H_dR__802->SetBinError(14,7.237152);
   VbbHcc_both_H_dR__802->SetBinError(15,11.65362);
   VbbHcc_both_H_dR__802->SetBinError(16,8.080734);
   VbbHcc_both_H_dR__802->SetBinError(17,5.954983);
   VbbHcc_both_H_dR__802->SetBinError(18,5.84839);
   VbbHcc_both_H_dR__802->SetBinError(19,3.606067);
   VbbHcc_both_H_dR__802->SetBinError(20,2.356426);
   VbbHcc_both_H_dR__802->SetBinError(21,4.25007);
   VbbHcc_both_H_dR__802->SetBinError(22,1.93292);
   VbbHcc_both_H_dR__802->SetBinError(23,0.9153485);
   VbbHcc_both_H_dR__802->SetBinError(24,0.3731371);
   VbbHcc_both_H_dR__802->SetBinError(25,0.3217263);
   VbbHcc_both_H_dR__802->SetBinError(26,0.1691464);
   VbbHcc_both_H_dR__802->SetBinError(27,0.06618476);
   VbbHcc_both_H_dR__802->SetBinError(28,0.0599265);
   VbbHcc_both_H_dR__802->SetEntries(15448);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR__802->SetFillColor(ci);
   VbbHcc_both_H_dR__802->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR__802->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR__802->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__802->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__802->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__802->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__802->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__802->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__802->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__802->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__802->Draw("HIST");
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
