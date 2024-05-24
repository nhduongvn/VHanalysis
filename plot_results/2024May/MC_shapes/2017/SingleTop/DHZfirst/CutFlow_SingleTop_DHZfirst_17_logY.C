#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_SingleTop_DHZfirst_17_logY()
{
//=========Macro generated from canvas: CutFlow_SingleTop_DHZfirst_17/CutFlow_SingleTop_DHZfirst_17
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_SingleTop_DHZfirst_17 = new TCanvas("CutFlow_SingleTop_DHZfirst_17", "CutFlow_SingleTop_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_SingleTop_DHZfirst_17->SetHighLightColor(2);
   CutFlow_SingleTop_DHZfirst_17->Range(-1.4,2.747561,7.933333,7.809391);
   CutFlow_SingleTop_DHZfirst_17->SetFillColor(0);
   CutFlow_SingleTop_DHZfirst_17->SetFillStyle(4000);
   CutFlow_SingleTop_DHZfirst_17->SetBorderMode(0);
   CutFlow_SingleTop_DHZfirst_17->SetBorderSize(2);
   CutFlow_SingleTop_DHZfirst_17->SetLogy();
   CutFlow_SingleTop_DHZfirst_17->SetLeftMargin(0.15);
   CutFlow_SingleTop_DHZfirst_17->SetFrameFillStyle(1000);
   CutFlow_SingleTop_DHZfirst_17->SetFrameBorderMode(0);
   CutFlow_SingleTop_DHZfirst_17->SetFrameFillStyle(1000);
   CutFlow_SingleTop_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__80 = new TH1D("CutFlow_evt_DHZfirst__80","",8,0,8);
   CutFlow_evt_DHZfirst__80->SetBinContent(1,1.060862e+07);
   CutFlow_evt_DHZfirst__80->SetBinContent(2,1.037991e+07);
   CutFlow_evt_DHZfirst__80->SetBinContent(3,896685.6);
   CutFlow_evt_DHZfirst__80->SetBinContent(4,63058.66);
   CutFlow_evt_DHZfirst__80->SetBinContent(5,27538.97);
   CutFlow_evt_DHZfirst__80->SetBinContent(6,9069.037);
   CutFlow_evt_DHZfirst__80->SetBinContent(7,3587.355);
   CutFlow_evt_DHZfirst__80->SetBinContent(8,1321.19);
   CutFlow_evt_DHZfirst__80->SetBinError(1,979.9783);
   CutFlow_evt_DHZfirst__80->SetBinError(2,962.9745);
   CutFlow_evt_DHZfirst__80->SetBinError(3,354.7902);
   CutFlow_evt_DHZfirst__80->SetBinError(4,93.1034);
   CutFlow_evt_DHZfirst__80->SetBinError(5,60.89624);
   CutFlow_evt_DHZfirst__80->SetBinError(6,34.69632);
   CutFlow_evt_DHZfirst__80->SetBinError(7,21.98341);
   CutFlow_evt_DHZfirst__80->SetBinError(8,13.38825);
   CutFlow_evt_DHZfirst__80->SetEntries(4.12188e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__80->SetLineColor(ci);
   CutFlow_evt_DHZfirst__80->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__80->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__80->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__80->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__80->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__80->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__80->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__80->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__80->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__80->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__80->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__80->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__80->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__80->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__80->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__80->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__80->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__80->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__80->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__80->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__80->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__80->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__80->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_SingleTop_DHZfirst_17->Modified();
   CutFlow_SingleTop_DHZfirst_17->cd();
   CutFlow_SingleTop_DHZfirst_17->SetSelected(CutFlow_SingleTop_DHZfirst_17);
}
