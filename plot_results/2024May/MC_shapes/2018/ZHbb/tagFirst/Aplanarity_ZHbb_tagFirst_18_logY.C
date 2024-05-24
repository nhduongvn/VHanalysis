#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHbb_tagFirst_18_logY()
{
//=========Macro generated from canvas: Aplanarity_ZHbb_tagFirst_18/Aplanarity_ZHbb_tagFirst_18
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHbb_tagFirst_18 = new TCanvas("Aplanarity_ZHbb_tagFirst_18", "Aplanarity_ZHbb_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHbb_tagFirst_18->SetHighLightColor(2);
   Aplanarity_ZHbb_tagFirst_18->Range(-0.2,-4.308179,1.133333,3.290556);
   Aplanarity_ZHbb_tagFirst_18->SetFillColor(0);
   Aplanarity_ZHbb_tagFirst_18->SetFillStyle(4000);
   Aplanarity_ZHbb_tagFirst_18->SetBorderMode(0);
   Aplanarity_ZHbb_tagFirst_18->SetBorderSize(2);
   Aplanarity_ZHbb_tagFirst_18->SetLogy();
   Aplanarity_ZHbb_tagFirst_18->SetLeftMargin(0.15);
   Aplanarity_ZHbb_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_tagFirst_18->SetFrameBorderMode(0);
   Aplanarity_ZHbb_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_ZHbb_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__456 = new TH1D("VH_tagFirst_Aplanarity__456","",50,0,1);
   VH_tagFirst_Aplanarity__456->SetBinContent(1,179.1158);
   VH_tagFirst_Aplanarity__456->SetBinContent(2,17.83109);
   VH_tagFirst_Aplanarity__456->SetBinContent(3,4.31656);
   VH_tagFirst_Aplanarity__456->SetBinContent(4,1.399537);
   VH_tagFirst_Aplanarity__456->SetBinContent(5,0.7701002);
   VH_tagFirst_Aplanarity__456->SetBinContent(6,0.2885395);
   VH_tagFirst_Aplanarity__456->SetBinContent(7,0.1725999);
   VH_tagFirst_Aplanarity__456->SetBinContent(8,0.1340762);
   VH_tagFirst_Aplanarity__456->SetBinContent(9,0.0350715);
   VH_tagFirst_Aplanarity__456->SetBinContent(10,0.04592573);
   VH_tagFirst_Aplanarity__456->SetBinContent(11,0.05849015);
   VH_tagFirst_Aplanarity__456->SetBinContent(12,0.005427752);
   VH_tagFirst_Aplanarity__456->SetBinContent(13,0.003441387);
   VH_tagFirst_Aplanarity__456->SetBinContent(14,0.009515078);
   VH_tagFirst_Aplanarity__456->SetBinContent(15,0.003659926);
   VH_tagFirst_Aplanarity__456->SetBinContent(16,0.006145408);
   VH_tagFirst_Aplanarity__456->SetBinContent(17,0.0005658798);
   VH_tagFirst_Aplanarity__456->SetBinContent(18,0.002125486);
   VH_tagFirst_Aplanarity__456->SetBinContent(19,0.00132109);
   VH_tagFirst_Aplanarity__456->SetBinContent(20,0.0006617458);
   VH_tagFirst_Aplanarity__456->SetBinContent(21,0.0006013037);
   VH_tagFirst_Aplanarity__456->SetBinError(1,0.8784711);
   VH_tagFirst_Aplanarity__456->SetBinError(2,0.2451453);
   VH_tagFirst_Aplanarity__456->SetBinError(3,0.1230085);
   VH_tagFirst_Aplanarity__456->SetBinError(4,0.0666492);
   VH_tagFirst_Aplanarity__456->SetBinError(5,0.0913824);
   VH_tagFirst_Aplanarity__456->SetBinError(6,0.03039765);
   VH_tagFirst_Aplanarity__456->SetBinError(7,0.01978702);
   VH_tagFirst_Aplanarity__456->SetBinError(8,0.02605878);
   VH_tagFirst_Aplanarity__456->SetBinError(9,0.006756956);
   VH_tagFirst_Aplanarity__456->SetBinError(10,0.01106698);
   VH_tagFirst_Aplanarity__456->SetBinError(11,0.01877731);
   VH_tagFirst_Aplanarity__456->SetBinError(12,0.00171059);
   VH_tagFirst_Aplanarity__456->SetBinError(13,0.001418921);
   VH_tagFirst_Aplanarity__456->SetBinError(14,0.004632871);
   VH_tagFirst_Aplanarity__456->SetBinError(15,0.003045162);
   VH_tagFirst_Aplanarity__456->SetBinError(16,0.003810599);
   VH_tagFirst_Aplanarity__456->SetBinError(17,0.0005658798);
   VH_tagFirst_Aplanarity__456->SetBinError(18,0.002125486);
   VH_tagFirst_Aplanarity__456->SetBinError(19,0.0009392297);
   VH_tagFirst_Aplanarity__456->SetBinError(20,0.0006617458);
   VH_tagFirst_Aplanarity__456->SetBinError(21,0.0006013037);
   VH_tagFirst_Aplanarity__456->SetEntries(171464);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__456->SetLineColor(ci);
   VH_tagFirst_Aplanarity__456->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__456->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__456->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__456->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__456->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__456->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__456->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__456->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__456->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__456->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__456->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__456->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__456->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__456->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__456->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHbb_tagFirst_18->Modified();
   Aplanarity_ZHbb_tagFirst_18->cd();
   Aplanarity_ZHbb_tagFirst_18->SetSelected(Aplanarity_ZHbb_tagFirst_18);
}
