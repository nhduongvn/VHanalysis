#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_WZ_tagOnly_17()
{
//=========Macro generated from canvas: H_dR_WZ_tagOnly_17/H_dR_WZ_tagOnly_17
//=========  (Fri May 24 12:42:18 2024) by ROOT version 6.28/10
   TCanvas *H_dR_WZ_tagOnly_17 = new TCanvas("H_dR_WZ_tagOnly_17", "H_dR_WZ_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_WZ_tagOnly_17->SetHighLightColor(2);
   H_dR_WZ_tagOnly_17->Range(-1.24,-2.283226,7.026667,20.54903);
   H_dR_WZ_tagOnly_17->SetFillColor(0);
   H_dR_WZ_tagOnly_17->SetFillStyle(4000);
   H_dR_WZ_tagOnly_17->SetBorderMode(0);
   H_dR_WZ_tagOnly_17->SetBorderSize(2);
   H_dR_WZ_tagOnly_17->SetLeftMargin(0.15);
   H_dR_WZ_tagOnly_17->SetFrameFillStyle(1000);
   H_dR_WZ_tagOnly_17->SetFrameBorderMode(0);
   H_dR_WZ_tagOnly_17->SetFrameFillStyle(1000);
   H_dR_WZ_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_H_dR__896 = new TH1D("VH_tagOnly_H_dR__896","",30,0,6);
   VH_tagOnly_H_dR__896->SetBinContent(3,7.849457);
   VH_tagOnly_H_dR__896->SetBinContent(4,17.396);
   VH_tagOnly_H_dR__896->SetBinContent(5,8.257126);
   VH_tagOnly_H_dR__896->SetBinContent(6,6.909968);
   VH_tagOnly_H_dR__896->SetBinContent(7,3.553641);
   VH_tagOnly_H_dR__896->SetBinContent(8,4.060731);
   VH_tagOnly_H_dR__896->SetBinContent(9,6.68088);
   VH_tagOnly_H_dR__896->SetBinContent(10,3.986064);
   VH_tagOnly_H_dR__896->SetBinContent(11,4.151598);
   VH_tagOnly_H_dR__896->SetBinContent(12,6.062668);
   VH_tagOnly_H_dR__896->SetBinContent(13,5.123651);
   VH_tagOnly_H_dR__896->SetBinContent(14,5.454269);
   VH_tagOnly_H_dR__896->SetBinContent(15,9.361465);
   VH_tagOnly_H_dR__896->SetBinContent(16,10.32648);
   VH_tagOnly_H_dR__896->SetBinContent(17,9.347112);
   VH_tagOnly_H_dR__896->SetBinContent(18,7.439149);
   VH_tagOnly_H_dR__896->SetBinContent(19,6.277472);
   VH_tagOnly_H_dR__896->SetBinContent(20,4.233282);
   VH_tagOnly_H_dR__896->SetBinContent(21,4.714274);
   VH_tagOnly_H_dR__896->SetBinContent(22,2.282424);
   VH_tagOnly_H_dR__896->SetBinContent(23,2.918293);
   VH_tagOnly_H_dR__896->SetBinContent(24,1.286774);
   VH_tagOnly_H_dR__896->SetBinContent(25,1.549236);
   VH_tagOnly_H_dR__896->SetBinContent(26,1.210145);
   VH_tagOnly_H_dR__896->SetBinContent(27,1.293157);
   VH_tagOnly_H_dR__896->SetBinContent(28,2.047541);
   VH_tagOnly_H_dR__896->SetBinContent(29,1.702641);
   VH_tagOnly_H_dR__896->SetBinContent(30,0.7959322);
   VH_tagOnly_H_dR__896->SetBinError(3,1.484086);
   VH_tagOnly_H_dR__896->SetBinError(4,2.523397);
   VH_tagOnly_H_dR__896->SetBinError(5,1.413466);
   VH_tagOnly_H_dR__896->SetBinError(6,1.762297);
   VH_tagOnly_H_dR__896->SetBinError(7,1.084127);
   VH_tagOnly_H_dR__896->SetBinError(8,1.24116);
   VH_tagOnly_H_dR__896->SetBinError(9,1.459213);
   VH_tagOnly_H_dR__896->SetBinError(10,1.187812);
   VH_tagOnly_H_dR__896->SetBinError(11,1.164412);
   VH_tagOnly_H_dR__896->SetBinError(12,1.269713);
   VH_tagOnly_H_dR__896->SetBinError(13,1.246818);
   VH_tagOnly_H_dR__896->SetBinError(14,1.213823);
   VH_tagOnly_H_dR__896->SetBinError(15,1.829775);
   VH_tagOnly_H_dR__896->SetBinError(16,1.841387);
   VH_tagOnly_H_dR__896->SetBinError(17,1.697494);
   VH_tagOnly_H_dR__896->SetBinError(18,1.614645);
   VH_tagOnly_H_dR__896->SetBinError(19,1.48565);
   VH_tagOnly_H_dR__896->SetBinError(20,1.197326);
   VH_tagOnly_H_dR__896->SetBinError(21,1.297942);
   VH_tagOnly_H_dR__896->SetBinError(22,0.7832372);
   VH_tagOnly_H_dR__896->SetBinError(23,0.7282032);
   VH_tagOnly_H_dR__896->SetBinError(24,0.5428009);
   VH_tagOnly_H_dR__896->SetBinError(25,0.7511381);
   VH_tagOnly_H_dR__896->SetBinError(26,0.5498901);
   VH_tagOnly_H_dR__896->SetBinError(27,0.5787444);
   VH_tagOnly_H_dR__896->SetBinError(28,0.8392801);
   VH_tagOnly_H_dR__896->SetBinError(29,0.734209);
   VH_tagOnly_H_dR__896->SetBinError(30,0.4001954);
   VH_tagOnly_H_dR__896->SetEntries(598);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_H_dR__896->SetLineColor(ci);
   VH_tagOnly_H_dR__896->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_tagOnly_H_dR__896->GetXaxis()->SetRange(1,31);
   VH_tagOnly_H_dR__896->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_H_dR__896->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_H_dR__896->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_H_dR__896->GetYaxis()->SetTitle("Events/0.2");
   VH_tagOnly_H_dR__896->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_H_dR__896->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_H_dR__896->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_H_dR__896->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_H_dR__896->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_H_dR__896->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_H_dR__896->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_H_dR__896->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_H_dR__896->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_WZ_tagOnly_17->Modified();
   H_dR_WZ_tagOnly_17->cd();
   H_dR_WZ_tagOnly_17->SetSelected(H_dR_WZ_tagOnly_17);
}
