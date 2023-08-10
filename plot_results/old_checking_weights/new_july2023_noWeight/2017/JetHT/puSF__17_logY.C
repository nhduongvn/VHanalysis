void puSF__17_logY()
{
//=========Macro generated from canvas: puSF__17/puSF__17
//=========  (Thu Aug  3 13:22:15 2023) by ROOT version 6.14/09
   TCanvas *puSF__17 = new TCanvas("puSF__17", "puSF__17",0,0,600,600);
   gStyle->SetOptStat(0);
   puSF__17->SetHighLightColor(2);
   puSF__17->Range(-2.8,-2.748352,2.533333,1.724871);
   puSF__17->SetFillColor(0);
   puSF__17->SetBorderMode(0);
   puSF__17->SetBorderSize(2);
   puSF__17->SetLogy();
   puSF__17->SetLeftMargin(0.15);
   puSF__17->SetFrameBorderMode(0);
   puSF__17->SetFrameBorderMode(0);
   
   TH1D *puSF__17 = new TH1D("puSF__17","",200,-2,2);
   puSF__17->GetXaxis()->SetTitle("PU Scale Factor");
   puSF__17->GetXaxis()->SetRange(1,200);
   puSF__17->GetXaxis()->SetLabelFont(42);
   puSF__17->GetXaxis()->SetLabelSize(0.035);
   puSF__17->GetXaxis()->SetTitleSize(0.035);
   puSF__17->GetXaxis()->SetTitleFont(42);
   puSF__17->GetYaxis()->SetLabelFont(42);
   puSF__17->GetYaxis()->SetLabelSize(0.035);
   puSF__17->GetYaxis()->SetTitleSize(0.035);
   puSF__17->GetYaxis()->SetTitleOffset(0);
   puSF__17->GetYaxis()->SetTitleFont(42);
   puSF__17->GetZaxis()->SetLabelFont(42);
   puSF__17->GetZaxis()->SetLabelSize(0.035);
   puSF__17->GetZaxis()->SetTitleSize(0.035);
   puSF__17->GetZaxis()->SetTitleFont(42);
   puSF__17->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   puSF__17->Modified();
   puSF__17->cd();
   puSF__17->SetSelected(puSF__17);
}
