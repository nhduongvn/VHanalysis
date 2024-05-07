#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WZ_DHZfirst_18_logY()
{
//=========Macro generated from canvas: CutFlow_WZ_DHZfirst_18/CutFlow_WZ_DHZfirst_18
//=========  (Mon Apr 22 15:12:12 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WZ_DHZfirst_18 = new TCanvas("CutFlow_WZ_DHZfirst_18", "CutFlow_WZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WZ_DHZfirst_18->SetHighLightColor(2);
   CutFlow_WZ_DHZfirst_18->Range(-1.4,0.8505991,7.933333,7.379508);
   CutFlow_WZ_DHZfirst_18->SetFillColor(0);
   CutFlow_WZ_DHZfirst_18->SetFillStyle(4000);
   CutFlow_WZ_DHZfirst_18->SetBorderMode(0);
   CutFlow_WZ_DHZfirst_18->SetBorderSize(2);
   CutFlow_WZ_DHZfirst_18->SetLogy();
   CutFlow_WZ_DHZfirst_18->SetLeftMargin(0.15);
   CutFlow_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   CutFlow_WZ_DHZfirst_18->SetFrameBorderMode(0);
   CutFlow_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   CutFlow_WZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__87 = new TH1D("CutFlow_evt_DHZfirst__87","",8,0,8);
   CutFlow_evt_DHZfirst__87->SetBinContent(1,2812341);
   CutFlow_evt_DHZfirst__87->SetBinContent(2,2746083);
   CutFlow_evt_DHZfirst__87->SetBinContent(3,71073.24);
   CutFlow_evt_DHZfirst__87->SetBinContent(4,962.359);
   CutFlow_evt_DHZfirst__87->SetBinContent(5,320.9044);
   CutFlow_evt_DHZfirst__87->SetBinContent(6,138.8461);
   CutFlow_evt_DHZfirst__87->SetBinContent(7,63.75584);
   CutFlow_evt_DHZfirst__87->SetBinContent(8,21.60615);
   CutFlow_evt_DHZfirst__87->SetBinError(1,998.0625);
   CutFlow_evt_DHZfirst__87->SetBinError(2,986.2353);
   CutFlow_evt_DHZfirst__87->SetBinError(3,158.6634);
   CutFlow_evt_DHZfirst__87->SetBinError(4,18.46258);
   CutFlow_evt_DHZfirst__87->SetBinError(5,10.66133);
   CutFlow_evt_DHZfirst__87->SetBinError(6,7.012785);
   CutFlow_evt_DHZfirst__87->SetBinError(7,4.75208);
   CutFlow_evt_DHZfirst__87->SetBinError(8,2.766384);
   CutFlow_evt_DHZfirst__87->SetEntries(1.589785e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__87->SetLineColor(ci);
   CutFlow_evt_DHZfirst__87->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__87->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__87->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__87->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__87->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__87->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__87->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__87->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__87->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__87->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__87->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__87->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__87->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__87->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__87->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__87->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__87->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__87->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__87->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__87->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__87->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__87->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__87->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WZ_DHZfirst_18->Modified();
   CutFlow_WZ_DHZfirst_18->cd();
   CutFlow_WZ_DHZfirst_18->SetSelected(CutFlow_WZ_DHZfirst_18);
}
