#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WW_tagOnly_17_logY()
{
//=========Macro generated from canvas: CutFlow_WW_tagOnly_17/CutFlow_WW_tagOnly_17
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WW_tagOnly_17 = new TCanvas("CutFlow_WW_tagOnly_17", "CutFlow_WW_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WW_tagOnly_17->SetHighLightColor(2);
   CutFlow_WW_tagOnly_17->Range(-1.4,1.129964,7.933333,7.56029);
   CutFlow_WW_tagOnly_17->SetFillColor(0);
   CutFlow_WW_tagOnly_17->SetFillStyle(4000);
   CutFlow_WW_tagOnly_17->SetBorderMode(0);
   CutFlow_WW_tagOnly_17->SetBorderSize(2);
   CutFlow_WW_tagOnly_17->SetLogy();
   CutFlow_WW_tagOnly_17->SetLeftMargin(0.15);
   CutFlow_WW_tagOnly_17->SetFrameFillStyle(1000);
   CutFlow_WW_tagOnly_17->SetFrameBorderMode(0);
   CutFlow_WW_tagOnly_17->SetFrameFillStyle(1000);
   CutFlow_WW_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__53 = new TH1D("CutFlow_evt_tagOnly__53","",8,0,8);
   CutFlow_evt_tagOnly__53->SetBinContent(1,4362225);
   CutFlow_evt_tagOnly__53->SetBinContent(2,4291043);
   CutFlow_evt_tagOnly__53->SetBinContent(3,87272.12);
   CutFlow_evt_tagOnly__53->SetBinContent(4,608.8253);
   CutFlow_evt_tagOnly__53->SetBinContent(5,369.1457);
   CutFlow_evt_tagOnly__53->SetBinContent(6,143.4171);
   CutFlow_evt_tagOnly__53->SetBinContent(7,118.5842);
   CutFlow_evt_tagOnly__53->SetBinContent(8,55.24629);
   CutFlow_evt_tagOnly__53->SetBinError(1,1103.248);
   CutFlow_evt_tagOnly__53->SetBinError(2,1094.209);
   CutFlow_evt_tagOnly__53->SetBinError(3,156.0475);
   CutFlow_evt_tagOnly__53->SetBinError(4,13.03363);
   CutFlow_evt_tagOnly__53->SetBinError(5,10.14887);
   CutFlow_evt_tagOnly__53->SetBinError(6,6.325859);
   CutFlow_evt_tagOnly__53->SetBinError(7,5.752179);
   CutFlow_evt_tagOnly__53->SetBinError(8,3.926183);
   CutFlow_evt_tagOnly__53->SetEntries(3.133031e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__53->SetLineColor(ci);
   CutFlow_evt_tagOnly__53->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__53->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__53->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__53->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__53->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__53->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__53->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__53->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__53->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__53->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__53->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__53->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__53->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__53->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__53->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__53->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__53->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__53->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__53->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__53->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__53->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__53->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__53->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WW_tagOnly_17->Modified();
   CutFlow_WW_tagOnly_17->cd();
   CutFlow_WW_tagOnly_17->SetSelected(CutFlow_WW_tagOnly_17);
}
