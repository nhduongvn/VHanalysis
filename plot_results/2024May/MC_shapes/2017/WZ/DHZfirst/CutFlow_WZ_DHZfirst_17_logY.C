#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WZ_DHZfirst_17_logY()
{
//=========Macro generated from canvas: CutFlow_WZ_DHZfirst_17/CutFlow_WZ_DHZfirst_17
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WZ_DHZfirst_17 = new TCanvas("CutFlow_WZ_DHZfirst_17", "CutFlow_WZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WZ_DHZfirst_17->SetHighLightColor(2);
   CutFlow_WZ_DHZfirst_17->Range(-1.4,0.8892694,7.933333,7.141);
   CutFlow_WZ_DHZfirst_17->SetFillColor(0);
   CutFlow_WZ_DHZfirst_17->SetFillStyle(4000);
   CutFlow_WZ_DHZfirst_17->SetBorderMode(0);
   CutFlow_WZ_DHZfirst_17->SetBorderSize(2);
   CutFlow_WZ_DHZfirst_17->SetLogy();
   CutFlow_WZ_DHZfirst_17->SetLeftMargin(0.15);
   CutFlow_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   CutFlow_WZ_DHZfirst_17->SetFrameBorderMode(0);
   CutFlow_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   CutFlow_WZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__86 = new TH1D("CutFlow_evt_DHZfirst__86","",8,0,8);
   CutFlow_evt_DHZfirst__86->SetBinContent(1,1730925);
   CutFlow_evt_DHZfirst__86->SetBinContent(2,1689960);
   CutFlow_evt_DHZfirst__86->SetBinContent(3,43623.08);
   CutFlow_evt_DHZfirst__86->SetBinContent(4,806.3315);
   CutFlow_evt_DHZfirst__86->SetBinContent(5,316.1697);
   CutFlow_evt_DHZfirst__86->SetBinContent(6,136.473);
   CutFlow_evt_DHZfirst__86->SetBinContent(7,65.38416);
   CutFlow_evt_DHZfirst__86->SetBinContent(8,23.03804);
   CutFlow_evt_DHZfirst__86->SetBinError(1,616.2647);
   CutFlow_evt_DHZfirst__86->SetBinError(2,608.9286);
   CutFlow_evt_DHZfirst__86->SetBinError(3,97.83322);
   CutFlow_evt_DHZfirst__86->SetBinError(4,13.30102);
   CutFlow_evt_DHZfirst__86->SetBinError(5,8.328912);
   CutFlow_evt_DHZfirst__86->SetBinError(6,5.472068);
   CutFlow_evt_DHZfirst__86->SetBinError(7,3.787603);
   CutFlow_evt_DHZfirst__86->SetBinError(8,2.248283);
   CutFlow_evt_DHZfirst__86->SetEntries(1.579626e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__86->SetLineColor(ci);
   CutFlow_evt_DHZfirst__86->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__86->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__86->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__86->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__86->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__86->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__86->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__86->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__86->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__86->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__86->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__86->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__86->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__86->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__86->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__86->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__86->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__86->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__86->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__86->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__86->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__86->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__86->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WZ_DHZfirst_17->Modified();
   CutFlow_WZ_DHZfirst_17->cd();
   CutFlow_WZ_DHZfirst_17->SetSelected(CutFlow_WZ_DHZfirst_17);
}
