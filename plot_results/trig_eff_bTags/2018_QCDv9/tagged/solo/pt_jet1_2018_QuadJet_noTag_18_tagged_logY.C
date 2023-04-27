#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_noTag_18_tagged_logY()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_noTag_18_tagged/pt_jet1_2018_QuadJet_noTag_18_tagged
//=========  (Thu Apr 27 10:20:01 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_noTag_18_tagged = new TCanvas("pt_jet1_2018_QuadJet_noTag_18_tagged", "pt_jet1_2018_QuadJet_noTag_18_tagged",0,0,600,600);
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_noTag_18_tagged->Range(-100,-0.4109811,566.6667,0.68853);
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetFillColor(0);
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetBorderSize(2);
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetLogy();
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetLeftMargin(0.15);
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet1__65 = new TH1D("_QuadJet_noTag_tagged_pt_jet1__65","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet1__65->SetBinContent(8,1);
   _QuadJet_noTag_tagged_pt_jet1__65->SetBinContent(10,1);
   _QuadJet_noTag_tagged_pt_jet1__65->SetBinContent(16,2);
   _QuadJet_noTag_tagged_pt_jet1__65->SetBinContent(17,1);
   _QuadJet_noTag_tagged_pt_jet1__65->SetBinContent(19,2);
   _QuadJet_noTag_tagged_pt_jet1__65->SetBinContent(29,1);
   _QuadJet_noTag_tagged_pt_jet1__65->SetEntries(8);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  162.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   58.8");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet1__65->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet1__65);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_pt_jet1__65->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet1__65->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet1__65->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_tagged_pt_jet1__65->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet1__65->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet1__65->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet1__65->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_pt_jet1__65->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet1__65->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet1__65->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet1__65->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet1__65->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet1__65->Draw("HIST");
   pt_jet1_2018_QuadJet_noTag_18_tagged->Modified();
   pt_jet1_2018_QuadJet_noTag_18_tagged->cd();
   pt_jet1_2018_QuadJet_noTag_18_tagged->SetSelected(pt_jet1_2018_QuadJet_noTag_18_tagged);
}
