#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_TT_tagOnly_16_logY()
{
//=========Macro generated from canvas: Aplanarity_TT_tagOnly_16/Aplanarity_TT_tagOnly_16
//=========  (Thu May 23 20:48:42 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_TT_tagOnly_16 = new TCanvas("Aplanarity_TT_tagOnly_16", "Aplanarity_TT_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_TT_tagOnly_16->SetHighLightColor(2);
   Aplanarity_TT_tagOnly_16->Range(-0.2,-2.041916,1.133333,6.656054);
   Aplanarity_TT_tagOnly_16->SetFillColor(0);
   Aplanarity_TT_tagOnly_16->SetFillStyle(4000);
   Aplanarity_TT_tagOnly_16->SetBorderMode(0);
   Aplanarity_TT_tagOnly_16->SetBorderSize(2);
   Aplanarity_TT_tagOnly_16->SetLogy();
   Aplanarity_TT_tagOnly_16->SetLeftMargin(0.15);
   Aplanarity_TT_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_TT_tagOnly_16->SetFrameBorderMode(0);
   Aplanarity_TT_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_TT_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1186 = new TH1D("VH_tagOnly_Aplanarity__1186","",50,0,1);
   VH_tagOnly_Aplanarity__1186->SetBinContent(1,322632.3);
   VH_tagOnly_Aplanarity__1186->SetBinContent(2,45887.93);
   VH_tagOnly_Aplanarity__1186->SetBinContent(3,11995.03);
   VH_tagOnly_Aplanarity__1186->SetBinContent(4,4324.164);
   VH_tagOnly_Aplanarity__1186->SetBinContent(5,1897.6);
   VH_tagOnly_Aplanarity__1186->SetBinContent(6,964.1414);
   VH_tagOnly_Aplanarity__1186->SetBinContent(7,522.1854);
   VH_tagOnly_Aplanarity__1186->SetBinContent(8,304.6647);
   VH_tagOnly_Aplanarity__1186->SetBinContent(9,187.5604);
   VH_tagOnly_Aplanarity__1186->SetBinContent(10,111.2936);
   VH_tagOnly_Aplanarity__1186->SetBinContent(11,73.23742);
   VH_tagOnly_Aplanarity__1186->SetBinContent(12,45.961);
   VH_tagOnly_Aplanarity__1186->SetBinContent(13,28.57979);
   VH_tagOnly_Aplanarity__1186->SetBinContent(14,19.41891);
   VH_tagOnly_Aplanarity__1186->SetBinContent(15,12.60744);
   VH_tagOnly_Aplanarity__1186->SetBinContent(16,5.958553);
   VH_tagOnly_Aplanarity__1186->SetBinContent(17,3.882608);
   VH_tagOnly_Aplanarity__1186->SetBinContent(18,2.364019);
   VH_tagOnly_Aplanarity__1186->SetBinContent(19,1.452018);
   VH_tagOnly_Aplanarity__1186->SetBinContent(20,0.1502042);
   VH_tagOnly_Aplanarity__1186->SetBinContent(21,0.3549959);
   VH_tagOnly_Aplanarity__1186->SetBinContent(22,0.1345586);
   VH_tagOnly_Aplanarity__1186->SetBinError(1,144.7392);
   VH_tagOnly_Aplanarity__1186->SetBinError(2,53.92326);
   VH_tagOnly_Aplanarity__1186->SetBinError(3,27.56273);
   VH_tagOnly_Aplanarity__1186->SetBinError(4,16.56931);
   VH_tagOnly_Aplanarity__1186->SetBinError(5,10.98684);
   VH_tagOnly_Aplanarity__1186->SetBinError(6,7.866263);
   VH_tagOnly_Aplanarity__1186->SetBinError(7,5.791992);
   VH_tagOnly_Aplanarity__1186->SetBinError(8,4.435526);
   VH_tagOnly_Aplanarity__1186->SetBinError(9,3.483999);
   VH_tagOnly_Aplanarity__1186->SetBinError(10,2.679215);
   VH_tagOnly_Aplanarity__1186->SetBinError(11,2.185404);
   VH_tagOnly_Aplanarity__1186->SetBinError(12,1.752017);
   VH_tagOnly_Aplanarity__1186->SetBinError(13,1.376025);
   VH_tagOnly_Aplanarity__1186->SetBinError(14,1.14268);
   VH_tagOnly_Aplanarity__1186->SetBinError(15,0.9281473);
   VH_tagOnly_Aplanarity__1186->SetBinError(16,0.6228128);
   VH_tagOnly_Aplanarity__1186->SetBinError(17,0.5069317);
   VH_tagOnly_Aplanarity__1186->SetBinError(18,0.3965454);
   VH_tagOnly_Aplanarity__1186->SetBinError(19,0.3080063);
   VH_tagOnly_Aplanarity__1186->SetBinError(20,0.07512884);
   VH_tagOnly_Aplanarity__1186->SetBinError(21,0.1620034);
   VH_tagOnly_Aplanarity__1186->SetBinError(22,0.09525813);
   VH_tagOnly_Aplanarity__1186->SetEntries(6624793);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1186->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1186->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1186->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1186->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1186->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1186->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1186->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1186->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1186->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1186->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1186->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1186->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1186->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1186->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1186->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1186->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_TT_tagOnly_16->Modified();
   Aplanarity_TT_tagOnly_16->cd();
   Aplanarity_TT_tagOnly_16->SetSelected(Aplanarity_TT_tagOnly_16);
}
