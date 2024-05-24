#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_WW_tagOnly_16_logY()
{
//=========Macro generated from canvas: Z_dR_WW_tagOnly_16/Z_dR_WW_tagOnly_16
//=========  (Thu May 23 20:48:38 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_WW_tagOnly_16 = new TCanvas("Z_dR_WW_tagOnly_16", "Z_dR_WW_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_WW_tagOnly_16->SetHighLightColor(2);
   Z_dR_WW_tagOnly_16->Range(-1.2,-0.7550248,6.8,1.281582);
   Z_dR_WW_tagOnly_16->SetFillColor(0);
   Z_dR_WW_tagOnly_16->SetFillStyle(4000);
   Z_dR_WW_tagOnly_16->SetBorderMode(0);
   Z_dR_WW_tagOnly_16->SetBorderSize(2);
   Z_dR_WW_tagOnly_16->SetLogy();
   Z_dR_WW_tagOnly_16->SetLeftMargin(0.15);
   Z_dR_WW_tagOnly_16->SetFrameFillStyle(1000);
   Z_dR_WW_tagOnly_16->SetFrameBorderMode(0);
   Z_dR_WW_tagOnly_16->SetFrameFillStyle(1000);
   Z_dR_WW_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_dR__862 = new TH1D("VH_tagOnly_Z_dR__862","",30,0,6);
   VH_tagOnly_Z_dR__862->SetBinContent(3,5.973061);
   VH_tagOnly_Z_dR__862->SetBinContent(4,5.622893);
   VH_tagOnly_Z_dR__862->SetBinContent(5,3.435779);
   VH_tagOnly_Z_dR__862->SetBinContent(6,3.246455);
   VH_tagOnly_Z_dR__862->SetBinContent(7,3.277732);
   VH_tagOnly_Z_dR__862->SetBinContent(8,2.6067);
   VH_tagOnly_Z_dR__862->SetBinContent(9,2.600119);
   VH_tagOnly_Z_dR__862->SetBinContent(10,2.979282);
   VH_tagOnly_Z_dR__862->SetBinContent(11,5.171005);
   VH_tagOnly_Z_dR__862->SetBinContent(12,2.925054);
   VH_tagOnly_Z_dR__862->SetBinContent(13,4.867322);
   VH_tagOnly_Z_dR__862->SetBinContent(14,4.092857);
   VH_tagOnly_Z_dR__862->SetBinContent(15,5.460537);
   VH_tagOnly_Z_dR__862->SetBinContent(16,6.314982);
   VH_tagOnly_Z_dR__862->SetBinContent(17,3.841192);
   VH_tagOnly_Z_dR__862->SetBinContent(18,4.294274);
   VH_tagOnly_Z_dR__862->SetBinContent(19,4.670536);
   VH_tagOnly_Z_dR__862->SetBinContent(20,3.437652);
   VH_tagOnly_Z_dR__862->SetBinContent(21,1.889984);
   VH_tagOnly_Z_dR__862->SetBinContent(22,1.609706);
   VH_tagOnly_Z_dR__862->SetBinContent(23,1.613288);
   VH_tagOnly_Z_dR__862->SetBinContent(24,1.505738);
   VH_tagOnly_Z_dR__862->SetBinContent(25,1.417175);
   VH_tagOnly_Z_dR__862->SetBinContent(26,1.273131);
   VH_tagOnly_Z_dR__862->SetBinContent(27,0.5619088);
   VH_tagOnly_Z_dR__862->SetBinContent(28,0.944713);
   VH_tagOnly_Z_dR__862->SetBinContent(29,0.9691892);
   VH_tagOnly_Z_dR__862->SetBinContent(30,0.602696);
   VH_tagOnly_Z_dR__862->SetBinContent(31,0.34745);
   VH_tagOnly_Z_dR__862->SetBinError(3,0.8488766);
   VH_tagOnly_Z_dR__862->SetBinError(4,0.832392);
   VH_tagOnly_Z_dR__862->SetBinError(5,0.6328099);
   VH_tagOnly_Z_dR__862->SetBinError(6,0.6129918);
   VH_tagOnly_Z_dR__862->SetBinError(7,0.6213514);
   VH_tagOnly_Z_dR__862->SetBinError(8,0.5572463);
   VH_tagOnly_Z_dR__862->SetBinError(9,0.5496972);
   VH_tagOnly_Z_dR__862->SetBinError(10,0.6362643);
   VH_tagOnly_Z_dR__862->SetBinError(11,0.8074476);
   VH_tagOnly_Z_dR__862->SetBinError(12,0.5678915);
   VH_tagOnly_Z_dR__862->SetBinError(13,0.7448211);
   VH_tagOnly_Z_dR__862->SetBinError(14,0.6935549);
   VH_tagOnly_Z_dR__862->SetBinError(15,0.7968877);
   VH_tagOnly_Z_dR__862->SetBinError(16,0.8757228);
   VH_tagOnly_Z_dR__862->SetBinError(17,0.6853387);
   VH_tagOnly_Z_dR__862->SetBinError(18,0.7150239);
   VH_tagOnly_Z_dR__862->SetBinError(19,0.7416988);
   VH_tagOnly_Z_dR__862->SetBinError(20,0.6339086);
   VH_tagOnly_Z_dR__862->SetBinError(21,0.4855312);
   VH_tagOnly_Z_dR__862->SetBinError(22,0.4499501);
   VH_tagOnly_Z_dR__862->SetBinError(23,0.451703);
   VH_tagOnly_Z_dR__862->SetBinError(24,0.4375561);
   VH_tagOnly_Z_dR__862->SetBinError(25,0.399188);
   VH_tagOnly_Z_dR__862->SetBinError(26,0.3888923);
   VH_tagOnly_Z_dR__862->SetBinError(27,0.2839544);
   VH_tagOnly_Z_dR__862->SetBinError(28,0.3531012);
   VH_tagOnly_Z_dR__862->SetBinError(29,0.3465415);
   VH_tagOnly_Z_dR__862->SetBinError(30,0.2724909);
   VH_tagOnly_Z_dR__862->SetBinError(31,0.2023073);
   VH_tagOnly_Z_dR__862->SetEntries(766);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_dR__862->SetLineColor(ci);
   VH_tagOnly_Z_dR__862->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagOnly_Z_dR__862->GetXaxis()->SetRange(1,30);
   VH_tagOnly_Z_dR__862->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__862->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__862->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__862->GetYaxis()->SetTitle("Events/0.2");
   VH_tagOnly_Z_dR__862->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__862->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_dR__862->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_dR__862->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_dR__862->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__862->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__862->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__862->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__862->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_WW_tagOnly_16->Modified();
   Z_dR_WW_tagOnly_16->cd();
   Z_dR_WW_tagOnly_16->SetSelected(Z_dR_WW_tagOnly_16);
}
