#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_TT_tagOnly_16_logY()
{
//=========Macro generated from canvas: CutFlow_TT_tagOnly_16/CutFlow_TT_tagOnly_16
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_TT_tagOnly_16 = new TCanvas("CutFlow_TT_tagOnly_16", "CutFlow_TT_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_TT_tagOnly_16->SetHighLightColor(2);
   CutFlow_TT_tagOnly_16->Range(-1.4,5.546169,7.933333,7.998436);
   CutFlow_TT_tagOnly_16->SetFillColor(0);
   CutFlow_TT_tagOnly_16->SetFillStyle(4000);
   CutFlow_TT_tagOnly_16->SetBorderMode(0);
   CutFlow_TT_tagOnly_16->SetBorderSize(2);
   CutFlow_TT_tagOnly_16->SetLogy();
   CutFlow_TT_tagOnly_16->SetLeftMargin(0.15);
   CutFlow_TT_tagOnly_16->SetFrameFillStyle(1000);
   CutFlow_TT_tagOnly_16->SetFrameBorderMode(0);
   CutFlow_TT_tagOnly_16->SetFrameFillStyle(1000);
   CutFlow_TT_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__46 = new TH1D("CutFlow_evt_tagOnly__46","",8,0,8);
   CutFlow_evt_tagOnly__46->SetBinContent(1,2.989923e+07);
   CutFlow_evt_tagOnly__46->SetBinContent(2,2.843674e+07);
   CutFlow_evt_tagOnly__46->SetBinContent(3,9067599);
   CutFlow_evt_tagOnly__46->SetBinContent(4,3248067);
   CutFlow_evt_tagOnly__46->SetBinContent(5,2998130);
   CutFlow_evt_tagOnly__46->SetBinContent(6,1764832);
   CutFlow_evt_tagOnly__46->SetBinContent(7,1237159);
   CutFlow_evt_tagOnly__46->SetBinContent(8,466169.5);
   CutFlow_evt_tagOnly__46->SetBinError(1,1377.314);
   CutFlow_evt_tagOnly__46->SetBinError(2,1351.912);
   CutFlow_evt_tagOnly__46->SetBinError(3,810.065);
   CutFlow_evt_tagOnly__46->SetBinError(4,486.9372);
   CutFlow_evt_tagOnly__46->SetBinError(5,467.248);
   CutFlow_evt_tagOnly__46->SetBinError(6,356.9907);
   CutFlow_evt_tagOnly__46->SetBinError(7,300.2414);
   CutFlow_evt_tagOnly__46->SetBinError(8,186.1673);
   CutFlow_evt_tagOnly__46->SetEntries(1.265596e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__46->SetLineColor(ci);
   CutFlow_evt_tagOnly__46->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__46->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__46->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__46->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__46->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__46->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__46->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__46->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__46->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__46->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__46->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__46->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__46->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__46->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__46->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__46->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__46->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__46->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__46->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__46->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__46->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__46->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__46->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_TT_tagOnly_16->Modified();
   CutFlow_TT_tagOnly_16->cd();
   CutFlow_TT_tagOnly_16->SetSelected(CutFlow_TT_tagOnly_16);
}
