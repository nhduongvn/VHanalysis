#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_QuadJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_QuadJet_TripleTag_16/pt_jet1_2016_QuadJet_TripleTag_16
//=========  (Mon Apr 24 10:39:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_QuadJet_TripleTag_16 = new TCanvas("pt_jet1_2016_QuadJet_TripleTag_16", "pt_jet1_2016_QuadJet_TripleTag_16",0,0,600,600);
   pt_jet1_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   pt_jet1_2016_QuadJet_TripleTag_16->Range(-100,-0.07904533,566.6667,3.721708);
   pt_jet1_2016_QuadJet_TripleTag_16->SetFillColor(0);
   pt_jet1_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   pt_jet1_2016_QuadJet_TripleTag_16->SetLogy();
   pt_jet1_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15);
   pt_jet1_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet1__242 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet1__242","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(5,10);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(6,208);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(7,625);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(8,1014);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(9,1155);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(10,1159);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(11,1070);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(12,956);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(13,783);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(14,742);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(15,572);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(16,494);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(17,398);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(18,339);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(19,285);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(20,246);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(21,227);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(22,172);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(23,145);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(24,135);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(25,99);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(26,72);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(27,76);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(28,51);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(29,52);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(30,44);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(31,44);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(32,32);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(33,30);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(34,29);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(35,17);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(36,22);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(37,17);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(38,20);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(39,12);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(40,15);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(41,16);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(42,9);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(43,13);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(44,10);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(45,14);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(46,8);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(47,9);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(48,6);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(49,4);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(50,4);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetBinContent(51,43);
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetEntries(11503);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 11503  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  132.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   64.2");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet1__242->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet1__242);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet1__242->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet1__242->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet1__242->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet1__242->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__242->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet1__242->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__242->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet1__242->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__242->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__242->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__242->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet1__242->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__242->Draw("HIST");
   pt_jet1_2016_QuadJet_TripleTag_16->Modified();
   pt_jet1_2016_QuadJet_TripleTag_16->cd();
   pt_jet1_2016_QuadJet_TripleTag_16->SetSelected(pt_jet1_2016_QuadJet_TripleTag_16);
}
