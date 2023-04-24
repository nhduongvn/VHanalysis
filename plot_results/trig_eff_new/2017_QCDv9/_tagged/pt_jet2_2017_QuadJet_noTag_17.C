#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_noTag_17()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_noTag_17/pt_jet2_2017_QuadJet_noTag_17
//=========  (Mon Apr 24 10:39:19 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_noTag_17 = new TCanvas("pt_jet2_2017_QuadJet_noTag_17", "pt_jet2_2017_QuadJet_noTag_17",0,0,600,600);
   pt_jet2_2017_QuadJet_noTag_17->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_noTag_17->Range(-109.1764,-0.003916084,585.8166,0.02871795);
   pt_jet2_2017_QuadJet_noTag_17->SetFillColor(0);
   pt_jet2_2017_QuadJet_noTag_17->SetFillStyle(4000);
   pt_jet2_2017_QuadJet_noTag_17->SetBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17->SetBorderSize(2);
   pt_jet2_2017_QuadJet_noTag_17->SetLeftMargin(0.15709);
   pt_jet2_2017_QuadJet_noTag_17->SetRightMargin(0.1234783);
   pt_jet2_2017_QuadJet_noTag_17->SetBottomMargin(0.12);
   pt_jet2_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   pt_jet2_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   pt_jet2_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet2__280 = new TH1D("_QuadJet_noTag_tagged_pt_jet2__280","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet2__280->SetBinContent(5,0.001338688);
   _QuadJet_noTag_tagged_pt_jet2__280->SetBinContent(6,0.002624672);
   _QuadJet_noTag_tagged_pt_jet2__280->SetBinContent(7,0.004118616);
   _QuadJet_noTag_tagged_pt_jet2__280->SetBinContent(8,0.004132231);
   _QuadJet_noTag_tagged_pt_jet2__280->SetBinContent(9,0.004649721);
   _QuadJet_noTag_tagged_pt_jet2__280->SetBinContent(10,0.008078231);
   _QuadJet_noTag_tagged_pt_jet2__280->SetBinContent(11,0.005512679);
   _QuadJet_noTag_tagged_pt_jet2__280->SetBinContent(12,0.005511811);
   _QuadJet_noTag_tagged_pt_jet2__280->SetBinContent(13,0.009018036);
   _QuadJet_noTag_tagged_pt_jet2__280->SetBinContent(14,0.007256894);
   _QuadJet_noTag_tagged_pt_jet2__280->SetBinContent(15,0.006134969);
   _QuadJet_noTag_tagged_pt_jet2__280->SetBinContent(16,0.006912442);
   _QuadJet_noTag_tagged_pt_jet2__280->SetBinContent(17,0.01090909);
   _QuadJet_noTag_tagged_pt_jet2__280->SetBinContent(18,0.005050505);
   _QuadJet_noTag_tagged_pt_jet2__280->SetBinContent(19,0.02424242);
   _QuadJet_noTag_tagged_pt_jet2__280->SetBinContent(21,0.01086957);
   _QuadJet_noTag_tagged_pt_jet2__280->SetEntries(0.1163606);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  142.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  43.81");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet2__280->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet2__280);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_pt_jet2__280->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet2__280->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet2__280->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_tagged_pt_jet2__280->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet2__280->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet2__280->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet2__280->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_pt_jet2__280->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet2__280->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet2__280->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet2__280->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet2__280->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet2__280->Draw("HIST");
   pt_jet2_2017_QuadJet_noTag_17->Modified();
   pt_jet2_2017_QuadJet_noTag_17->cd();
   pt_jet2_2017_QuadJet_noTag_17->SetSelected(pt_jet2_2017_QuadJet_noTag_17);
}
