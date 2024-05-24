#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_TT_DHZfirst_2b1c_16()
{
//=========Macro generated from canvas: Aplanarity_TT_DHZfirst_2b1c_16/Aplanarity_TT_DHZfirst_2b1c_16
//=========  (Fri May 24 12:43:07 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_TT_DHZfirst_2b1c_16 = new TCanvas("Aplanarity_TT_DHZfirst_2b1c_16", "Aplanarity_TT_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_TT_DHZfirst_2b1c_16->SetHighLightColor(2);
   Aplanarity_TT_DHZfirst_2b1c_16->Range(-0.2,-12098.39,1.133333,108885.5);
   Aplanarity_TT_DHZfirst_2b1c_16->SetFillColor(0);
   Aplanarity_TT_DHZfirst_2b1c_16->SetFillStyle(4000);
   Aplanarity_TT_DHZfirst_2b1c_16->SetBorderMode(0);
   Aplanarity_TT_DHZfirst_2b1c_16->SetBorderSize(2);
   Aplanarity_TT_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_TT_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_TT_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_TT_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_TT_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4066 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4066","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinContent(1,92178.21);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinContent(2,13629.44);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinContent(3,3159.103);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinContent(4,955.115);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinContent(5,337.329);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinContent(6,135.8888);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinContent(7,61.75978);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinContent(8,28.40909);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinContent(9,14.26282);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinContent(10,8.220964);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinContent(11,5.256964);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinContent(12,3.268617);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinContent(13,1.762182);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinContent(14,0.8627241);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinContent(15,0.4735794);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinContent(16,0.2744282);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinContent(18,0.06959569);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinContent(19,0.04633373);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinContent(20,0.03775379);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinError(1,73.56237);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinError(2,27.91112);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinError(3,13.30808);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinError(4,7.248294);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinError(5,4.232457);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinError(6,2.655837);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinError(7,1.796944);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinError(8,1.193894);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinError(9,0.8311252);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinError(10,0.6358687);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinError(11,0.5077732);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinError(12,0.3942721);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinError(13,0.2928205);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinError(14,0.2216937);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinError(15,0.1481634);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinError(16,0.1183599);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinError(18,0.0498547);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinError(19,0.04633373);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetBinError(20,0.03775379);
   VH_DHZfirst_2b1c_Aplanarity__4066->SetEntries(2099263);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4066->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4066->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4066->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4066->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4066->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4066->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4066->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4066->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4066->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4066->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4066->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4066->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4066->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4066->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4066->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4066->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_TT_DHZfirst_2b1c_16->Modified();
   Aplanarity_TT_DHZfirst_2b1c_16->cd();
   Aplanarity_TT_DHZfirst_2b1c_16->SetSelected(Aplanarity_TT_DHZfirst_2b1c_16);
}
