#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_TripleTag_17/pt_jet2_2017_QuadJet_TripleTag_17
//=========  (Wed Apr 26 16:41:49 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet2_2017_QuadJet_TripleTag_17", "pt_jet2_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet2_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_TripleTag_17->Range(-100,-0.8182509,566.6667,4.353958);
   pt_jet2_2017_QuadJet_TripleTag_17->SetFillColor(0);
   pt_jet2_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   pt_jet2_2017_QuadJet_TripleTag_17->SetLogy();
   pt_jet2_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   pt_jet2_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet2__14 = new TH1D("_QuadJet_TripleTag_pt_jet2__14","",50,0,500);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(5,144);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(6,1627);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(7,3171);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(8,3624);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(9,3382);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(10,2554);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(11,1775);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(12,1311);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(13,939);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(14,669);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(15,512);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(16,366);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(17,258);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(18,192);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(19,122);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(20,125);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(21,84);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(22,55);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(23,43);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(24,34);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(25,27);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(26,19);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(27,21);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(28,26);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(29,9);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(30,5);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(31,9);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(32,3);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(33,8);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(34,4);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(35,4);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(36,2);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(38,2);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(39,2);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(41,2);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(42,1);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(44,1);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(45,1);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(46,1);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(49,2);
   _QuadJet_TripleTag_pt_jet2__14->SetBinContent(51,2);
   _QuadJet_TripleTag_pt_jet2__14->SetEntries(21138);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 21138  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  94.23");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  35.39");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet2__14->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet2__14);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet2__14->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet2__14->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet2__14->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet2__14->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet2__14->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet2__14->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet2__14->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet2__14->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet2__14->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet2__14->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet2__14->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet2__14->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet2__14->Draw("HIST");
   pt_jet2_2017_QuadJet_TripleTag_17->Modified();
   pt_jet2_2017_QuadJet_TripleTag_17->cd();
   pt_jet2_2017_QuadJet_TripleTag_17->SetSelected(pt_jet2_2017_QuadJet_TripleTag_17);
}
