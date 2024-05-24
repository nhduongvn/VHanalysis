#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_TT_DHZfirst_17_logY()
{
//=========Macro generated from canvas: CutFlow_TT_DHZfirst_17/CutFlow_TT_DHZfirst_17
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_TT_DHZfirst_17 = new TCanvas("CutFlow_TT_DHZfirst_17", "CutFlow_TT_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_TT_DHZfirst_17->SetHighLightColor(2);
   CutFlow_TT_DHZfirst_17->Range(-1.4,3.878129,7.933333,8.195576);
   CutFlow_TT_DHZfirst_17->SetFillColor(0);
   CutFlow_TT_DHZfirst_17->SetFillStyle(4000);
   CutFlow_TT_DHZfirst_17->SetBorderMode(0);
   CutFlow_TT_DHZfirst_17->SetBorderSize(2);
   CutFlow_TT_DHZfirst_17->SetLogy();
   CutFlow_TT_DHZfirst_17->SetLeftMargin(0.15);
   CutFlow_TT_DHZfirst_17->SetFrameFillStyle(1000);
   CutFlow_TT_DHZfirst_17->SetFrameBorderMode(0);
   CutFlow_TT_DHZfirst_17->SetFrameFillStyle(1000);
   CutFlow_TT_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__77 = new TH1D("CutFlow_evt_DHZfirst__77","",8,0,8);
   CutFlow_evt_DHZfirst__77->SetBinContent(1,3.063958e+07);
   CutFlow_evt_DHZfirst__77->SetBinContent(2,2.905105e+07);
   CutFlow_evt_DHZfirst__77->SetBinContent(3,9323322);
   CutFlow_evt_DHZfirst__77->SetBinContent(4,975882.8);
   CutFlow_evt_DHZfirst__77->SetBinContent(5,425650.9);
   CutFlow_evt_DHZfirst__77->SetBinContent(6,120394.8);
   CutFlow_evt_DHZfirst__77->SetBinContent(7,40822.93);
   CutFlow_evt_DHZfirst__77->SetBinContent(8,13822);
   CutFlow_evt_DHZfirst__77->SetBinError(1,1301.043);
   CutFlow_evt_DHZfirst__77->SetBinError(2,1276.501);
   CutFlow_evt_DHZfirst__77->SetBinError(3,772.1683);
   CutFlow_evt_DHZfirst__77->SetBinError(4,251.5843);
   CutFlow_evt_DHZfirst__77->SetBinError(5,164.9934);
   CutFlow_evt_DHZfirst__77->SetBinError(6,86.71114);
   CutFlow_evt_DHZfirst__77->SetBinError(7,50.57639);
   CutFlow_evt_DHZfirst__77->SetBinError(8,29.42609);
   CutFlow_evt_DHZfirst__77->SetEntries(1.371987e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__77->SetLineColor(ci);
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__77->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__77->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__77->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__77->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__77->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__77->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__77->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__77->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__77->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__77->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__77->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_TT_DHZfirst_17->Modified();
   CutFlow_TT_DHZfirst_17->cd();
   CutFlow_TT_DHZfirst_17->SetSelected(CutFlow_TT_DHZfirst_17);
}
