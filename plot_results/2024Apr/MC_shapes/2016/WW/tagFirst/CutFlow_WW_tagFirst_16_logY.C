#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WW_tagFirst_16_logY()
{
//=========Macro generated from canvas: CutFlow_WW_tagFirst_16/CutFlow_WW_tagFirst_16
//=========  (Mon Apr 22 15:12:12 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WW_tagFirst_16 = new TCanvas("CutFlow_WW_tagFirst_16", "CutFlow_WW_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WW_tagFirst_16->SetHighLightColor(2);
   CutFlow_WW_tagFirst_16->Range(-1.2,1.069073,6.8,7.555252);
   CutFlow_WW_tagFirst_16->SetFillColor(0);
   CutFlow_WW_tagFirst_16->SetFillStyle(4000);
   CutFlow_WW_tagFirst_16->SetBorderMode(0);
   CutFlow_WW_tagFirst_16->SetBorderSize(2);
   CutFlow_WW_tagFirst_16->SetLogy();
   CutFlow_WW_tagFirst_16->SetLeftMargin(0.15);
   CutFlow_WW_tagFirst_16->SetFrameFillStyle(1000);
   CutFlow_WW_tagFirst_16->SetFrameBorderMode(0);
   CutFlow_WW_tagFirst_16->SetFrameFillStyle(1000);
   CutFlow_WW_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__22 = new TH1D("CutFlow_evt_tagFirst__22","",5,0,5);
   CutFlow_evt_tagFirst__22->SetBinContent(1,4256819);
   CutFlow_evt_tagFirst__22->SetBinContent(2,4192757);
   CutFlow_evt_tagFirst__22->SetBinContent(3,84693.24);
   CutFlow_evt_tagFirst__22->SetBinContent(4,7712.395);
   CutFlow_evt_tagFirst__22->SetBinContent(5,104.4049);
   CutFlow_evt_tagFirst__22->SetBinError(1,756.2975);
   CutFlow_evt_tagFirst__22->SetBinError(2,750.585);
   CutFlow_evt_tagFirst__22->SetBinError(3,106.6779);
   CutFlow_evt_tagFirst__22->SetBinError(4,32.19175);
   CutFlow_evt_tagFirst__22->SetBinError(5,3.745507);
   CutFlow_evt_tagFirst__22->SetEntries(6.357171e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__22->SetLineColor(ci);
   CutFlow_evt_tagFirst__22->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__22->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__22->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__22->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__22->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__22->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__22->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__22->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__22->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__22->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__22->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__22->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__22->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__22->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__22->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__22->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__22->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__22->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__22->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__22->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WW_tagFirst_16->Modified();
   CutFlow_WW_tagFirst_16->cd();
   CutFlow_WW_tagFirst_16->SetSelected(CutFlow_WW_tagFirst_16);
}
