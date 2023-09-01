#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_16()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Fri Sep  1 13:23:30 2023) by ROOT version 6.28/04
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(-1.2,-1.588682,6.8,14.29814);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLeftMargin(0.15);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR__83 = new TH1D("VbbHcc_tags_H_dR__83","",30,0,6);
   VbbHcc_tags_H_dR__83->SetBinContent(3,12.10424);
   VbbHcc_tags_H_dR__83->SetBinContent(4,6.173849);
   VbbHcc_tags_H_dR__83->SetBinContent(5,6.920706);
   VbbHcc_tags_H_dR__83->SetBinContent(6,5.300377);
   VbbHcc_tags_H_dR__83->SetBinContent(7,6.441112);
   VbbHcc_tags_H_dR__83->SetBinContent(8,3.696534);
   VbbHcc_tags_H_dR__83->SetBinContent(9,4.091813);
   VbbHcc_tags_H_dR__83->SetBinContent(10,4.655257);
   VbbHcc_tags_H_dR__83->SetBinContent(11,5.850875);
   VbbHcc_tags_H_dR__83->SetBinContent(12,7.340438);
   VbbHcc_tags_H_dR__83->SetBinContent(13,8.770854);
   VbbHcc_tags_H_dR__83->SetBinContent(14,6.034625);
   VbbHcc_tags_H_dR__83->SetBinContent(15,11.3427);
   VbbHcc_tags_H_dR__83->SetBinContent(16,10.13969);
   VbbHcc_tags_H_dR__83->SetBinContent(17,11.35664);
   VbbHcc_tags_H_dR__83->SetBinContent(18,9.249137);
   VbbHcc_tags_H_dR__83->SetBinContent(19,9.604309);
   VbbHcc_tags_H_dR__83->SetBinContent(20,9.485857);
   VbbHcc_tags_H_dR__83->SetBinContent(21,4.360798);
   VbbHcc_tags_H_dR__83->SetBinContent(22,4.46669);
   VbbHcc_tags_H_dR__83->SetBinContent(23,2.915142);
   VbbHcc_tags_H_dR__83->SetBinContent(24,2.837025);
   VbbHcc_tags_H_dR__83->SetBinContent(25,3.256782);
   VbbHcc_tags_H_dR__83->SetBinContent(26,1.314713);
   VbbHcc_tags_H_dR__83->SetBinContent(27,2.128571);
   VbbHcc_tags_H_dR__83->SetBinContent(28,6.275625);
   VbbHcc_tags_H_dR__83->SetBinContent(29,1.139243);
   VbbHcc_tags_H_dR__83->SetBinContent(30,0.7422088);
   VbbHcc_tags_H_dR__83->SetBinContent(31,0.3638994);
   VbbHcc_tags_H_dR__83->SetBinError(3,4.569085);
   VbbHcc_tags_H_dR__83->SetBinError(4,0.8213471);
   VbbHcc_tags_H_dR__83->SetBinError(5,1.417648);
   VbbHcc_tags_H_dR__83->SetBinError(6,1.171457);
   VbbHcc_tags_H_dR__83->SetBinError(7,1.538942);
   VbbHcc_tags_H_dR__83->SetBinError(8,0.5835962);
   VbbHcc_tags_H_dR__83->SetBinError(9,1.190233);
   VbbHcc_tags_H_dR__83->SetBinError(10,0.9549797);
   VbbHcc_tags_H_dR__83->SetBinError(11,1.060066);
   VbbHcc_tags_H_dR__83->SetBinError(12,1.438998);
   VbbHcc_tags_H_dR__83->SetBinError(13,1.437837);
   VbbHcc_tags_H_dR__83->SetBinError(14,1.039868);
   VbbHcc_tags_H_dR__83->SetBinError(15,1.989317);
   VbbHcc_tags_H_dR__83->SetBinError(16,1.721254);
   VbbHcc_tags_H_dR__83->SetBinError(17,2.032586);
   VbbHcc_tags_H_dR__83->SetBinError(18,1.416998);
   VbbHcc_tags_H_dR__83->SetBinError(19,1.999362);
   VbbHcc_tags_H_dR__83->SetBinError(20,1.826876);
   VbbHcc_tags_H_dR__83->SetBinError(21,0.9808686);
   VbbHcc_tags_H_dR__83->SetBinError(22,1.18171);
   VbbHcc_tags_H_dR__83->SetBinError(23,0.5197222);
   VbbHcc_tags_H_dR__83->SetBinError(24,0.6850551);
   VbbHcc_tags_H_dR__83->SetBinError(25,1.127718);
   VbbHcc_tags_H_dR__83->SetBinError(26,0.3845113);
   VbbHcc_tags_H_dR__83->SetBinError(27,0.8263399);
   VbbHcc_tags_H_dR__83->SetBinError(28,4.2785);
   VbbHcc_tags_H_dR__83->SetBinError(29,0.3814641);
   VbbHcc_tags_H_dR__83->SetBinError(30,0.2506042);
   VbbHcc_tags_H_dR__83->SetBinError(31,0.1364792);
   VbbHcc_tags_H_dR__83->SetEntries(3416);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR__83->SetFillColor(ci);
   VbbHcc_tags_H_dR__83->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR__83->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR__83->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__83->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__83->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__83->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__83->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__83->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__83->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__83->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__83->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}
