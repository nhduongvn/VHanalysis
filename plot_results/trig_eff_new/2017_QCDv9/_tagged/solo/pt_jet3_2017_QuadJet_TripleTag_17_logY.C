#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_TripleTag_17/pt_jet3_2017_QuadJet_TripleTag_17
//=========  (Mon Apr 24 10:39:19 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet3_2017_QuadJet_TripleTag_17", "pt_jet3_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet3_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_TripleTag_17->Range(-100,-0.7491071,566.6667,3.731664);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFillColor(0);
   pt_jet3_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   pt_jet3_2017_QuadJet_TripleTag_17->SetLogy();
   pt_jet3_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet3__302 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet3__302","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetBinContent(5,345);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetBinContent(6,1014);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetBinContent(7,874);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetBinContent(8,693);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetBinContent(9,441);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetBinContent(10,305);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetBinContent(11,210);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetBinContent(12,124);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetBinContent(13,90);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetBinContent(14,59);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetBinContent(15,40);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetBinContent(16,31);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetBinContent(17,11);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetBinContent(18,11);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetBinContent(19,4);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetBinContent(20,5);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetBinContent(21,4);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetBinContent(22,1);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetBinContent(23,4);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetBinContent(24,2);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetBinContent(28,1);
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetEntries(4269);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4269   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  75.16");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  25.27");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet3__302->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet3__302);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet3__302->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet3__302->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet3__302->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet3__302->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__302->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3__302->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__302->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet3__302->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__302->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__302->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__302->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3__302->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__302->Draw("HIST");
   pt_jet3_2017_QuadJet_TripleTag_17->Modified();
   pt_jet3_2017_QuadJet_TripleTag_17->cd();
   pt_jet3_2017_QuadJet_TripleTag_17->SetSelected(pt_jet3_2017_QuadJet_TripleTag_17);
}
