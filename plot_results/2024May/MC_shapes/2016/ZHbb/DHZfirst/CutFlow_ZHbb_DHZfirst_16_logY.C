#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZHbb_DHZfirst_16_logY()
{
//=========Macro generated from canvas: CutFlow_ZHbb_DHZfirst_16/CutFlow_ZHbb_DHZfirst_16
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZHbb_DHZfirst_16 = new TCanvas("CutFlow_ZHbb_DHZfirst_16", "CutFlow_ZHbb_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZHbb_DHZfirst_16->SetHighLightColor(2);
   CutFlow_ZHbb_DHZfirst_16->Range(-1.4,1.151173,7.933333,4.810155);
   CutFlow_ZHbb_DHZfirst_16->SetFillColor(0);
   CutFlow_ZHbb_DHZfirst_16->SetFillStyle(4000);
   CutFlow_ZHbb_DHZfirst_16->SetBorderMode(0);
   CutFlow_ZHbb_DHZfirst_16->SetBorderSize(2);
   CutFlow_ZHbb_DHZfirst_16->SetLogy();
   CutFlow_ZHbb_DHZfirst_16->SetLeftMargin(0.15);
   CutFlow_ZHbb_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_ZHbb_DHZfirst_16->SetFrameBorderMode(0);
   CutFlow_ZHbb_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_ZHbb_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__64 = new TH1D("CutFlow_evt_DHZfirst__64","",8,0,8);
   CutFlow_evt_DHZfirst__64->SetBinContent(1,14679.39);
   CutFlow_evt_DHZfirst__64->SetBinContent(2,14654.26);
   CutFlow_evt_DHZfirst__64->SetBinContent(3,2194.165);
   CutFlow_evt_DHZfirst__64->SetBinContent(4,866.6985);
   CutFlow_evt_DHZfirst__64->SetBinContent(5,398.9173);
   CutFlow_evt_DHZfirst__64->SetBinContent(6,200.3657);
   CutFlow_evt_DHZfirst__64->SetBinContent(7,65.78112);
   CutFlow_evt_DHZfirst__64->SetBinContent(8,22.41512);
   CutFlow_evt_DHZfirst__64->SetBinError(1,4.15965);
   CutFlow_evt_DHZfirst__64->SetBinError(2,4.156639);
   CutFlow_evt_DHZfirst__64->SetBinError(3,1.491234);
   CutFlow_evt_DHZfirst__64->SetBinError(4,0.9261927);
   CutFlow_evt_DHZfirst__64->SetBinError(5,0.6297473);
   CutFlow_evt_DHZfirst__64->SetBinError(6,0.4487182);
   CutFlow_evt_DHZfirst__64->SetBinError(7,0.2579053);
   CutFlow_evt_DHZfirst__64->SetBinError(8,0.1515142);
   CutFlow_evt_DHZfirst__64->SetEntries(3.488523e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__64->SetLineColor(ci);
   CutFlow_evt_DHZfirst__64->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__64->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__64->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__64->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__64->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__64->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__64->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__64->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__64->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__64->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__64->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__64->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__64->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__64->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__64->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__64->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__64->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__64->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__64->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__64->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__64->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__64->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__64->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZHbb_DHZfirst_16->Modified();
   CutFlow_ZHbb_DHZfirst_16->cd();
   CutFlow_ZHbb_DHZfirst_16->SetSelected(CutFlow_ZHbb_DHZfirst_16);
}
