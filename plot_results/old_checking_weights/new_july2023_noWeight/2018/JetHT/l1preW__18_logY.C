void l1preW__18_logY()
{
//=========Macro generated from canvas: l1preW__18/l1preW__18
//=========  (Thu Aug  3 13:22:19 2023) by ROOT version 6.14/09
   TCanvas *l1preW__18 = new TCanvas("l1preW__18", "l1preW__18",0,0,600,600);
   gStyle->SetOptStat(0);
   l1preW__18->SetHighLightColor(2);
   l1preW__18->Range(-2.8,-2.748352,2.533333,1.724871);
   l1preW__18->SetFillColor(0);
   l1preW__18->SetBorderMode(0);
   l1preW__18->SetBorderSize(2);
   l1preW__18->SetLogy();
   l1preW__18->SetLeftMargin(0.15);
   l1preW__18->SetFrameBorderMode(0);
   l1preW__18->SetFrameBorderMode(0);
   
   TH1D *l1preW__31 = new TH1D("l1preW__31","",200,-2,2);
   l1preW__31->GetXaxis()->SetTitle("L1 Pre-Firing Scale");
   l1preW__31->GetXaxis()->SetRange(1,200);
   l1preW__31->GetXaxis()->SetLabelFont(42);
   l1preW__31->GetXaxis()->SetLabelSize(0.035);
   l1preW__31->GetXaxis()->SetTitleSize(0.035);
   l1preW__31->GetXaxis()->SetTitleFont(42);
   l1preW__31->GetYaxis()->SetLabelFont(42);
   l1preW__31->GetYaxis()->SetLabelSize(0.035);
   l1preW__31->GetYaxis()->SetTitleSize(0.035);
   l1preW__31->GetYaxis()->SetTitleOffset(0);
   l1preW__31->GetYaxis()->SetTitleFont(42);
   l1preW__31->GetZaxis()->SetLabelFont(42);
   l1preW__31->GetZaxis()->SetLabelSize(0.035);
   l1preW__31->GetZaxis()->SetTitleSize(0.035);
   l1preW__31->GetZaxis()->SetTitleFont(42);
   l1preW__31->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   l1preW__18->Modified();
   l1preW__18->cd();
   l1preW__18->SetSelected(l1preW__18);
}
