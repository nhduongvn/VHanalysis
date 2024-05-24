#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_ZJets_tagOnly_16_logY()
{
//=========Macro generated from canvas: H_dR_ZJets_tagOnly_16/H_dR_ZJets_tagOnly_16
//=========  (Thu May 23 20:48:38 2024) by ROOT version 6.28/10
   TCanvas *H_dR_ZJets_tagOnly_16 = new TCanvas("H_dR_ZJets_tagOnly_16", "H_dR_ZJets_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_ZJets_tagOnly_16->SetHighLightColor(2);
   H_dR_ZJets_tagOnly_16->Range(-1.24,-0.6311876,7.026667,3.745555);
   H_dR_ZJets_tagOnly_16->SetFillColor(0);
   H_dR_ZJets_tagOnly_16->SetFillStyle(4000);
   H_dR_ZJets_tagOnly_16->SetBorderMode(0);
   H_dR_ZJets_tagOnly_16->SetBorderSize(2);
   H_dR_ZJets_tagOnly_16->SetLogy();
   H_dR_ZJets_tagOnly_16->SetLeftMargin(0.15);
   H_dR_ZJets_tagOnly_16->SetFrameFillStyle(1000);
   H_dR_ZJets_tagOnly_16->SetFrameBorderMode(0);
   H_dR_ZJets_tagOnly_16->SetFrameFillStyle(1000);
   H_dR_ZJets_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_H_dR__883 = new TH1D("VH_tagOnly_H_dR__883","",30,0,6);
   VH_tagOnly_H_dR__883->SetBinContent(2,1.280904);
   VH_tagOnly_H_dR__883->SetBinContent(3,712.4201);
   VH_tagOnly_H_dR__883->SetBinContent(4,781.6211);
   VH_tagOnly_H_dR__883->SetBinContent(5,698.2881);
   VH_tagOnly_H_dR__883->SetBinContent(6,657.6978);
   VH_tagOnly_H_dR__883->SetBinContent(7,638.2559);
   VH_tagOnly_H_dR__883->SetBinContent(8,593.4954);
   VH_tagOnly_H_dR__883->SetBinContent(9,619.2258);
   VH_tagOnly_H_dR__883->SetBinContent(10,644.8694);
   VH_tagOnly_H_dR__883->SetBinContent(11,678.89);
   VH_tagOnly_H_dR__883->SetBinContent(12,766.6685);
   VH_tagOnly_H_dR__883->SetBinContent(13,801.095);
   VH_tagOnly_H_dR__883->SetBinContent(14,906.5119);
   VH_tagOnly_H_dR__883->SetBinContent(15,993.6856);
   VH_tagOnly_H_dR__883->SetBinContent(16,1072.338);
   VH_tagOnly_H_dR__883->SetBinContent(17,1031.634);
   VH_tagOnly_H_dR__883->SetBinContent(18,953.8103);
   VH_tagOnly_H_dR__883->SetBinContent(19,839.7643);
   VH_tagOnly_H_dR__883->SetBinContent(20,749.9856);
   VH_tagOnly_H_dR__883->SetBinContent(21,621.7512);
   VH_tagOnly_H_dR__883->SetBinContent(22,541.5585);
   VH_tagOnly_H_dR__883->SetBinContent(23,446.3708);
   VH_tagOnly_H_dR__883->SetBinContent(24,369.1064);
   VH_tagOnly_H_dR__883->SetBinContent(25,265.9015);
   VH_tagOnly_H_dR__883->SetBinContent(26,216.1968);
   VH_tagOnly_H_dR__883->SetBinContent(27,176.7752);
   VH_tagOnly_H_dR__883->SetBinContent(28,154.9602);
   VH_tagOnly_H_dR__883->SetBinContent(29,145.2996);
   VH_tagOnly_H_dR__883->SetBinContent(30,79.67617);
   VH_tagOnly_H_dR__883->SetBinContent(31,74.05876);
   VH_tagOnly_H_dR__883->SetBinError(2,0.3756983);
   VH_tagOnly_H_dR__883->SetBinError(3,14.34948);
   VH_tagOnly_H_dR__883->SetBinError(4,16.35012);
   VH_tagOnly_H_dR__883->SetBinError(5,16.48506);
   VH_tagOnly_H_dR__883->SetBinError(6,17.76553);
   VH_tagOnly_H_dR__883->SetBinError(7,18.59403);
   VH_tagOnly_H_dR__883->SetBinError(8,16.59199);
   VH_tagOnly_H_dR__883->SetBinError(9,17.23277);
   VH_tagOnly_H_dR__883->SetBinError(10,17.27826);
   VH_tagOnly_H_dR__883->SetBinError(11,17.19817);
   VH_tagOnly_H_dR__883->SetBinError(12,19.57171);
   VH_tagOnly_H_dR__883->SetBinError(13,17.6518);
   VH_tagOnly_H_dR__883->SetBinError(14,18.63451);
   VH_tagOnly_H_dR__883->SetBinError(15,19.40859);
   VH_tagOnly_H_dR__883->SetBinError(16,20.282);
   VH_tagOnly_H_dR__883->SetBinError(17,19.35896);
   VH_tagOnly_H_dR__883->SetBinError(18,19.06325);
   VH_tagOnly_H_dR__883->SetBinError(19,16.45705);
   VH_tagOnly_H_dR__883->SetBinError(20,17.3169);
   VH_tagOnly_H_dR__883->SetBinError(21,15.08);
   VH_tagOnly_H_dR__883->SetBinError(22,15.68293);
   VH_tagOnly_H_dR__883->SetBinError(23,15.12051);
   VH_tagOnly_H_dR__883->SetBinError(24,14.83009);
   VH_tagOnly_H_dR__883->SetBinError(25,9.777664);
   VH_tagOnly_H_dR__883->SetBinError(26,10.27423);
   VH_tagOnly_H_dR__883->SetBinError(27,9.247573);
   VH_tagOnly_H_dR__883->SetBinError(28,8.483027);
   VH_tagOnly_H_dR__883->SetBinError(29,9.446033);
   VH_tagOnly_H_dR__883->SetBinError(30,4.813784);
   VH_tagOnly_H_dR__883->SetBinError(31,5.292823);
   VH_tagOnly_H_dR__883->SetEntries(161332);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_H_dR__883->SetLineColor(ci);
   VH_tagOnly_H_dR__883->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_tagOnly_H_dR__883->GetXaxis()->SetRange(1,31);
   VH_tagOnly_H_dR__883->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_H_dR__883->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_H_dR__883->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_H_dR__883->GetYaxis()->SetTitle("Events/0.2");
   VH_tagOnly_H_dR__883->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_H_dR__883->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_H_dR__883->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_H_dR__883->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_H_dR__883->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_H_dR__883->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_H_dR__883->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_H_dR__883->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_H_dR__883->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_ZJets_tagOnly_16->Modified();
   H_dR_ZJets_tagOnly_16->cd();
   H_dR_ZJets_tagOnly_16->SetSelected(H_dR_ZJets_tagOnly_16);
}
