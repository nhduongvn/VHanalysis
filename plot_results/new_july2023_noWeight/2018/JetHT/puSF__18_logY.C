void puSF__18_logY()
{
//=========Macro generated from canvas: puSF__18/puSF__18
//=========  (Thu Aug  3 13:22:16 2023) by ROOT version 6.14/09
   TCanvas *puSF__18 = new TCanvas("puSF__18", "puSF__18",0,0,600,600);
   gStyle->SetOptStat(0);
   puSF__18->SetHighLightColor(2);
   puSF__18->Range(-2.8,-2.748352,2.533333,1.724871);
   puSF__18->SetFillColor(0);
   puSF__18->SetBorderMode(0);
   puSF__18->SetBorderSize(2);
   puSF__18->SetLogy();
   puSF__18->SetLeftMargin(0.15);
   puSF__18->SetFrameBorderMode(0);
   puSF__18->SetFrameBorderMode(0);
   
   TH1D *puSF__20 = new TH1D("puSF__20","",200,-2,2);
   puSF__20->GetXaxis()->SetTitle("PU Scale Factor");
   puSF__20->GetXaxis()->SetRange(1,200);
   puSF__20->GetXaxis()->SetLabelFont(42);
   puSF__20->GetXaxis()->SetLabelSize(0.035);
   puSF__20->GetXaxis()->SetTitleSize(0.035);
   puSF__20->GetXaxis()->SetTitleFont(42);
   puSF__20->GetYaxis()->SetLabelFont(42);
   puSF__20->GetYaxis()->SetLabelSize(0.035);
   puSF__20->GetYaxis()->SetTitleSize(0.035);
   puSF__20->GetYaxis()->SetTitleOffset(0);
   puSF__20->GetYaxis()->SetTitleFont(42);
   puSF__20->GetZaxis()->SetLabelFont(42);
   puSF__20->GetZaxis()->SetLabelSize(0.035);
   puSF__20->GetZaxis()->SetTitleSize(0.035);
   puSF__20->GetZaxis()->SetTitleFont(42);
   puSF__20->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   puSF__18->Modified();
   puSF__18->cd();
   puSF__18->SetSelected(puSF__18);
}
