#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_TripleTag_17/pt_jet1_2017_QuadJet_TripleTag_17
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet1_2017_QuadJet_TripleTag_17", "pt_jet1_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet1_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_TripleTag_17->Range(-100,-0.2609193,566.6667,4.109186);
   pt_jet1_2017_QuadJet_TripleTag_17->SetFillColor(0);
   pt_jet1_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   pt_jet1_2017_QuadJet_TripleTag_17->SetLogy();
   pt_jet1_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   pt_jet1_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet1__38 = new TH1D("_QuadJet_TripleTag_pt_jet1__38","",50,0,500);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(5,3);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(6,95);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(7,564);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(8,1450);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(9,2309);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(10,2481);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(11,2473);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(12,2104);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(13,1796);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(14,1435);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(15,1197);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(16,996);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(17,779);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(18,611);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(19,507);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(20,461);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(21,358);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(22,281);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(23,218);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(24,202);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(25,172);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(26,118);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(27,130);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(28,114);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(29,99);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(30,69);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(31,70);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(32,58);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(33,53);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(34,40);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(35,44);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(36,34);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(37,25);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(38,23);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(39,21);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(40,17);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(41,16);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(42,16);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(43,27);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(44,6);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(45,10);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(46,8);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(47,12);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(48,5);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(49,9);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(50,5);
   _QuadJet_TripleTag_pt_jet1__38->SetBinContent(51,57);
   _QuadJet_TripleTag_pt_jet1__38->SetEntries(21578);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 21578  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  132.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   58.1");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet1__38->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet1__38);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet1__38->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet1__38->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet1__38->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet1__38->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet1__38->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet1__38->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet1__38->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet1__38->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet1__38->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet1__38->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet1__38->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet1__38->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet1__38->Draw("HIST");
   pt_jet1_2017_QuadJet_TripleTag_17->Modified();
   pt_jet1_2017_QuadJet_TripleTag_17->cd();
   pt_jet1_2017_QuadJet_TripleTag_17->SetSelected(pt_jet1_2017_QuadJet_TripleTag_17);
}
