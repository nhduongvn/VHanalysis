#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZZ_tagOnly_17_logY()
{
//=========Macro generated from canvas: CutFlow_ZZ_tagOnly_17/CutFlow_ZZ_tagOnly_17
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZZ_tagOnly_17 = new TCanvas("CutFlow_ZZ_tagOnly_17", "CutFlow_ZZ_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZZ_tagOnly_17->SetHighLightColor(2);
   CutFlow_ZZ_tagOnly_17->Range(-1.4,1.581989,7.933333,6.557879);
   CutFlow_ZZ_tagOnly_17->SetFillColor(0);
   CutFlow_ZZ_tagOnly_17->SetFillStyle(4000);
   CutFlow_ZZ_tagOnly_17->SetBorderMode(0);
   CutFlow_ZZ_tagOnly_17->SetBorderSize(2);
   CutFlow_ZZ_tagOnly_17->SetLogy();
   CutFlow_ZZ_tagOnly_17->SetLeftMargin(0.15);
   CutFlow_ZZ_tagOnly_17->SetFrameFillStyle(1000);
   CutFlow_ZZ_tagOnly_17->SetFrameBorderMode(0);
   CutFlow_ZZ_tagOnly_17->SetFrameFillStyle(1000);
   CutFlow_ZZ_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__59 = new TH1D("CutFlow_evt_tagOnly__59","",8,0,8);
   CutFlow_evt_tagOnly__59->SetBinContent(1,606375);
   CutFlow_evt_tagOnly__59->SetBinContent(2,590445.2);
   CutFlow_evt_tagOnly__59->SetBinContent(3,15527.55);
   CutFlow_evt_tagOnly__59->SetBinContent(4,516.5168);
   CutFlow_evt_tagOnly__59->SetBinContent(5,480.439);
   CutFlow_evt_tagOnly__59->SetBinContent(6,381.6174);
   CutFlow_evt_tagOnly__59->SetBinContent(7,240.2195);
   CutFlow_evt_tagOnly__59->SetBinContent(8,99.71799);
   CutFlow_evt_tagOnly__59->SetBinError(1,368.6187);
   CutFlow_evt_tagOnly__59->SetBinError(2,363.7446);
   CutFlow_evt_tagOnly__59->SetBinError(3,58.98725);
   CutFlow_evt_tagOnly__59->SetBinError(4,10.75843);
   CutFlow_evt_tagOnly__59->SetBinError(5,10.3759);
   CutFlow_evt_tagOnly__59->SetBinError(6,9.247425);
   CutFlow_evt_tagOnly__59->SetBinError(7,7.336871);
   CutFlow_evt_tagOnly__59->SetBinError(8,4.727086);
   CutFlow_evt_tagOnly__59->SetEntries(5417874);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__59->SetLineColor(ci);
   CutFlow_evt_tagOnly__59->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__59->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__59->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__59->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__59->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__59->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__59->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__59->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__59->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__59->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__59->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__59->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__59->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__59->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__59->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__59->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__59->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__59->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__59->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__59->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__59->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__59->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__59->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZZ_tagOnly_17->Modified();
   CutFlow_ZZ_tagOnly_17->cd();
   CutFlow_ZZ_tagOnly_17->SetSelected(CutFlow_ZZ_tagOnly_17);
}
