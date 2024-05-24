#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WJets_tagOnly_16()
{
//=========Macro generated from canvas: Sphericity_WJets_tagOnly_16/Sphericity_WJets_tagOnly_16
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WJets_tagOnly_16 = new TCanvas("Sphericity_WJets_tagOnly_16", "Sphericity_WJets_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WJets_tagOnly_16->SetHighLightColor(2);
   Sphericity_WJets_tagOnly_16->Range(-0.2,-466.2928,1.133333,4196.635);
   Sphericity_WJets_tagOnly_16->SetFillColor(0);
   Sphericity_WJets_tagOnly_16->SetFillStyle(4000);
   Sphericity_WJets_tagOnly_16->SetBorderMode(0);
   Sphericity_WJets_tagOnly_16->SetBorderSize(2);
   Sphericity_WJets_tagOnly_16->SetLeftMargin(0.15);
   Sphericity_WJets_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_WJets_tagOnly_16->SetFrameBorderMode(0);
   Sphericity_WJets_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_WJets_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1150 = new TH1D("VH_tagOnly_Sphericity__1150","",25,0,1);
   VH_tagOnly_Sphericity__1150->SetBinContent(1,3552.707);
   VH_tagOnly_Sphericity__1150->SetBinContent(2,2700.778);
   VH_tagOnly_Sphericity__1150->SetBinContent(3,1558.443);
   VH_tagOnly_Sphericity__1150->SetBinContent(4,984.356);
   VH_tagOnly_Sphericity__1150->SetBinContent(5,582.2528);
   VH_tagOnly_Sphericity__1150->SetBinContent(6,313.7465);
   VH_tagOnly_Sphericity__1150->SetBinContent(7,160.8631);
   VH_tagOnly_Sphericity__1150->SetBinContent(8,82.85443);
   VH_tagOnly_Sphericity__1150->SetBinContent(9,60.41232);
   VH_tagOnly_Sphericity__1150->SetBinContent(10,48.40791);
   VH_tagOnly_Sphericity__1150->SetBinContent(11,42.54226);
   VH_tagOnly_Sphericity__1150->SetBinContent(12,25.9565);
   VH_tagOnly_Sphericity__1150->SetBinContent(13,15.39143);
   VH_tagOnly_Sphericity__1150->SetBinContent(14,9.502885);
   VH_tagOnly_Sphericity__1150->SetBinContent(15,8.77018);
   VH_tagOnly_Sphericity__1150->SetBinContent(16,10.32068);
   VH_tagOnly_Sphericity__1150->SetBinContent(17,3.869686);
   VH_tagOnly_Sphericity__1150->SetBinContent(18,2.19146);
   VH_tagOnly_Sphericity__1150->SetBinContent(19,2.264211);
   VH_tagOnly_Sphericity__1150->SetBinContent(20,0.5559609);
   VH_tagOnly_Sphericity__1150->SetBinContent(21,0.08314192);
   VH_tagOnly_Sphericity__1150->SetBinContent(23,0.03557255);
   VH_tagOnly_Sphericity__1150->SetBinError(1,54.9585);
   VH_tagOnly_Sphericity__1150->SetBinError(2,52.71501);
   VH_tagOnly_Sphericity__1150->SetBinError(3,39.20284);
   VH_tagOnly_Sphericity__1150->SetBinError(4,31.4261);
   VH_tagOnly_Sphericity__1150->SetBinError(5,24.32413);
   VH_tagOnly_Sphericity__1150->SetBinError(6,15.51461);
   VH_tagOnly_Sphericity__1150->SetBinError(7,11.70928);
   VH_tagOnly_Sphericity__1150->SetBinError(8,7.260836);
   VH_tagOnly_Sphericity__1150->SetBinError(9,5.928654);
   VH_tagOnly_Sphericity__1150->SetBinError(10,4.304415);
   VH_tagOnly_Sphericity__1150->SetBinError(11,9.807341);
   VH_tagOnly_Sphericity__1150->SetBinError(12,5.5552);
   VH_tagOnly_Sphericity__1150->SetBinError(13,1.777169);
   VH_tagOnly_Sphericity__1150->SetBinError(14,1.291449);
   VH_tagOnly_Sphericity__1150->SetBinError(15,1.319189);
   VH_tagOnly_Sphericity__1150->SetBinError(16,3.849342);
   VH_tagOnly_Sphericity__1150->SetBinError(17,0.5706392);
   VH_tagOnly_Sphericity__1150->SetBinError(18,0.436002);
   VH_tagOnly_Sphericity__1150->SetBinError(19,0.5577125);
   VH_tagOnly_Sphericity__1150->SetBinError(20,0.2640314);
   VH_tagOnly_Sphericity__1150->SetBinError(21,0.08314192);
   VH_tagOnly_Sphericity__1150->SetBinError(23,0.03557255);
   VH_tagOnly_Sphericity__1150->SetEntries(110079);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1150->SetLineColor(ci);
   VH_tagOnly_Sphericity__1150->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1150->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1150->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1150->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1150->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1150->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1150->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1150->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1150->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1150->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1150->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1150->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1150->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1150->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1150->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WJets_tagOnly_16->Modified();
   Sphericity_WJets_tagOnly_16->cd();
   Sphericity_WJets_tagOnly_16->SetSelected(Sphericity_WJets_tagOnly_16);
}
