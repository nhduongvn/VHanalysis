#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_TT_DHZfirst_18()
{
//=========Macro generated from canvas: Sphericity_TT_DHZfirst_18/Sphericity_TT_DHZfirst_18
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_TT_DHZfirst_18 = new TCanvas("Sphericity_TT_DHZfirst_18", "Sphericity_TT_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_TT_DHZfirst_18->SetHighLightColor(2);
   Sphericity_TT_DHZfirst_18->Range(-0.2,-1378.703,1.133333,12408.33);
   Sphericity_TT_DHZfirst_18->SetFillColor(0);
   Sphericity_TT_DHZfirst_18->SetFillStyle(4000);
   Sphericity_TT_DHZfirst_18->SetBorderMode(0);
   Sphericity_TT_DHZfirst_18->SetBorderSize(2);
   Sphericity_TT_DHZfirst_18->SetLeftMargin(0.15);
   Sphericity_TT_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_TT_DHZfirst_18->SetFrameBorderMode(0);
   Sphericity_TT_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_TT_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1878 = new TH1D("VH_DHZfirst_Sphericity__1878","",25,0,1);
   VH_DHZfirst_Sphericity__1878->SetBinContent(1,10504.4);
   VH_DHZfirst_Sphericity__1878->SetBinContent(2,10227.74);
   VH_DHZfirst_Sphericity__1878->SetBinContent(3,5747.624);
   VH_DHZfirst_Sphericity__1878->SetBinContent(4,3117.444);
   VH_DHZfirst_Sphericity__1878->SetBinContent(5,1642.379);
   VH_DHZfirst_Sphericity__1878->SetBinContent(6,796.8173);
   VH_DHZfirst_Sphericity__1878->SetBinContent(7,366.3216);
   VH_DHZfirst_Sphericity__1878->SetBinContent(8,174.1679);
   VH_DHZfirst_Sphericity__1878->SetBinContent(9,91.92422);
   VH_DHZfirst_Sphericity__1878->SetBinContent(10,50.61908);
   VH_DHZfirst_Sphericity__1878->SetBinContent(11,28.63198);
   VH_DHZfirst_Sphericity__1878->SetBinContent(12,19.88972);
   VH_DHZfirst_Sphericity__1878->SetBinContent(13,13.52228);
   VH_DHZfirst_Sphericity__1878->SetBinContent(14,9.132313);
   VH_DHZfirst_Sphericity__1878->SetBinContent(15,6.297342);
   VH_DHZfirst_Sphericity__1878->SetBinContent(16,4.672516);
   VH_DHZfirst_Sphericity__1878->SetBinContent(17,2.031076);
   VH_DHZfirst_Sphericity__1878->SetBinContent(18,1.625862);
   VH_DHZfirst_Sphericity__1878->SetBinContent(19,1.042219);
   VH_DHZfirst_Sphericity__1878->SetBinContent(20,0.4891982);
   VH_DHZfirst_Sphericity__1878->SetBinContent(21,0.03093757);
   VH_DHZfirst_Sphericity__1878->SetBinContent(22,0.1138892);
   VH_DHZfirst_Sphericity__1878->SetBinContent(23,0.09660715);
   VH_DHZfirst_Sphericity__1878->SetBinError(1,44.11426);
   VH_DHZfirst_Sphericity__1878->SetBinError(2,43.36627);
   VH_DHZfirst_Sphericity__1878->SetBinError(3,33.90289);
   VH_DHZfirst_Sphericity__1878->SetBinError(4,24.49788);
   VH_DHZfirst_Sphericity__1878->SetBinError(5,17.88612);
   VH_DHZfirst_Sphericity__1878->SetBinError(6,12.20093);
   VH_DHZfirst_Sphericity__1878->SetBinError(7,8.327038);
   VH_DHZfirst_Sphericity__1878->SetBinError(8,5.223593);
   VH_DHZfirst_Sphericity__1878->SetBinError(9,4.191394);
   VH_DHZfirst_Sphericity__1878->SetBinError(10,2.768637);
   VH_DHZfirst_Sphericity__1878->SetBinError(11,2.116244);
   VH_DHZfirst_Sphericity__1878->SetBinError(12,1.905362);
   VH_DHZfirst_Sphericity__1878->SetBinError(13,1.399859);
   VH_DHZfirst_Sphericity__1878->SetBinError(14,1.221119);
   VH_DHZfirst_Sphericity__1878->SetBinError(15,0.946028);
   VH_DHZfirst_Sphericity__1878->SetBinError(16,0.8941357);
   VH_DHZfirst_Sphericity__1878->SetBinError(17,0.4306349);
   VH_DHZfirst_Sphericity__1878->SetBinError(18,0.6026193);
   VH_DHZfirst_Sphericity__1878->SetBinError(19,0.4022442);
   VH_DHZfirst_Sphericity__1878->SetBinError(20,0.2581056);
   VH_DHZfirst_Sphericity__1878->SetBinError(21,0.03093757);
   VH_DHZfirst_Sphericity__1878->SetBinError(22,0.1138892);
   VH_DHZfirst_Sphericity__1878->SetBinError(23,0.06881083);
   VH_DHZfirst_Sphericity__1878->SetEntries(285831);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1878->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1878->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1878->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1878->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1878->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1878->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1878->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1878->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1878->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1878->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1878->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1878->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1878->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1878->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1878->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1878->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_TT_DHZfirst_18->Modified();
   Sphericity_TT_DHZfirst_18->cd();
   Sphericity_TT_DHZfirst_18->SetSelected(Sphericity_TT_DHZfirst_18);
}
