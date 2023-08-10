void l1preW__16()
{
//=========Macro generated from canvas: l1preW__16/l1preW__16
//=========  (Thu Aug  3 12:48:59 2023) by ROOT version 6.14/09
   TCanvas *l1preW__16 = new TCanvas("l1preW__16", "l1preW__16",0,0,600,600);
   gStyle->SetOptStat(0);
   l1preW__16->SetHighLightColor(2);
   l1preW__16->Range(-2.8,-0.13125,2.533333,1.18125);
   l1preW__16->SetFillColor(0);
   l1preW__16->SetBorderMode(0);
   l1preW__16->SetBorderSize(2);
   l1preW__16->SetLeftMargin(0.15);
   l1preW__16->SetFrameBorderMode(0);
   l1preW__16->SetFrameBorderMode(0);
   
   TH1D *l1preW__25 = new TH1D("l1preW__25","",200,-2,2);
   l1preW__25->GetXaxis()->SetTitle("L1 Pre-Firing Scale");
   l1preW__25->GetXaxis()->SetRange(1,200);
   l1preW__25->GetXaxis()->SetLabelFont(42);
   l1preW__25->GetXaxis()->SetLabelSize(0.035);
   l1preW__25->GetXaxis()->SetTitleSize(0.035);
   l1preW__25->GetXaxis()->SetTitleFont(42);
   l1preW__25->GetYaxis()->SetLabelFont(42);
   l1preW__25->GetYaxis()->SetLabelSize(0.035);
   l1preW__25->GetYaxis()->SetTitleSize(0.035);
   l1preW__25->GetYaxis()->SetTitleOffset(0);
   l1preW__25->GetYaxis()->SetTitleFont(42);
   l1preW__25->GetZaxis()->SetLabelFont(42);
   l1preW__25->GetZaxis()->SetLabelSize(0.035);
   l1preW__25->GetZaxis()->SetTitleSize(0.035);
   l1preW__25->GetZaxis()->SetTitleFont(42);
   l1preW__25->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   l1preW__16->Modified();
   l1preW__16->cd();
   l1preW__16->SetSelected(l1preW__16);
}
