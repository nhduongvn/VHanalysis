#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_TT_tagFirst_16_logY()
{
//=========Macro generated from canvas: CutFlow_TT_tagFirst_16/CutFlow_TT_tagFirst_16
//=========  (Thu May 23 15:31:42 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_TT_tagFirst_16 = new TCanvas("CutFlow_TT_tagFirst_16", "CutFlow_TT_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_TT_tagFirst_16->SetHighLightColor(2);
   CutFlow_TT_tagFirst_16->Range(-1.2,5.085781,6.8,8.04959);
   CutFlow_TT_tagFirst_16->SetFillColor(0);
   CutFlow_TT_tagFirst_16->SetFillStyle(4000);
   CutFlow_TT_tagFirst_16->SetBorderMode(0);
   CutFlow_TT_tagFirst_16->SetBorderSize(2);
   CutFlow_TT_tagFirst_16->SetLogy();
   CutFlow_TT_tagFirst_16->SetLeftMargin(0.15);
   CutFlow_TT_tagFirst_16->SetFrameFillStyle(1000);
   CutFlow_TT_tagFirst_16->SetFrameBorderMode(0);
   CutFlow_TT_tagFirst_16->SetFrameFillStyle(1000);
   CutFlow_TT_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__16 = new TH1D("CutFlow_evt_tagFirst__16","",5,0,5);
   CutFlow_evt_tagFirst__16->SetBinContent(1,2.989923e+07);
   CutFlow_evt_tagFirst__16->SetBinContent(2,2.843674e+07);
   CutFlow_evt_tagFirst__16->SetBinContent(3,9067599);
   CutFlow_evt_tagFirst__16->SetBinContent(4,3248067);
   CutFlow_evt_tagFirst__16->SetBinContent(5,482161);
   CutFlow_evt_tagFirst__16->SetBinError(1,1377.314);
   CutFlow_evt_tagFirst__16->SetBinError(2,1351.912);
   CutFlow_evt_tagFirst__16->SetBinError(3,810.065);
   CutFlow_evt_tagFirst__16->SetBinError(4,486.9372);
   CutFlow_evt_tagFirst__16->SetBinError(5,189.3435);
   CutFlow_evt_tagFirst__16->SetEntries(1.177966e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__16->SetLineColor(ci);
   CutFlow_evt_tagFirst__16->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__16->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__16->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__16->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__16->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__16->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__16->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__16->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__16->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__16->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__16->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__16->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__16->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__16->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__16->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__16->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__16->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__16->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__16->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__16->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_TT_tagFirst_16->Modified();
   CutFlow_TT_tagFirst_16->cd();
   CutFlow_TT_tagFirst_16->SetSelected(CutFlow_TT_tagFirst_16);
}
