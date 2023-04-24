#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_TripleTag_16/pt_jet2_2016_DoubleJet_TripleTag_16
//=========  (Mon Apr 24 10:39:19 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_DoubleJet_TripleTag_16 = new TCanvas("pt_jet2_2016_DoubleJet_TripleTag_16", "pt_jet2_2016_DoubleJet_TripleTag_16",0,0,600,600);
   pt_jet2_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   pt_jet2_2016_DoubleJet_TripleTag_16->Range(-100,-0.7641188,566.6667,3.866769);
   pt_jet2_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   pt_jet2_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   pt_jet2_2016_DoubleJet_TripleTag_16->SetLogy();
   pt_jet2_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15);
   pt_jet2_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_pt_jet2__272 = new TH1D("_DoubleJet_TripleTag_tagged_pt_jet2__272","",50,0,500);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(5,40);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(6,353);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(7,802);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(8,1125);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(9,1337);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(10,1174);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(11,990);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(12,749);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(13,545);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(14,440);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(15,318);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(16,237);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(17,181);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(18,121);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(19,93);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(20,80);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(21,61);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(22,46);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(23,45);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(24,20);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(25,18);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(26,13);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(27,14);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(28,13);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(29,12);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(30,5);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(31,8);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(32,9);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(33,5);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(34,4);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(35,4);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(36,4);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(37,2);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(39,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(41,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(42,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(43,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(44,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(45,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetBinContent(46,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetEntries(8875);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8875   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  105.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   40.8");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_pt_jet2__272->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_pt_jet2__272);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_tagged_pt_jet2__272->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_tagged_pt_jet2__272->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_tagged_pt_jet2__272->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__272->Draw("HIST");
   pt_jet2_2016_DoubleJet_TripleTag_16->Modified();
   pt_jet2_2016_DoubleJet_TripleTag_16->cd();
   pt_jet2_2016_DoubleJet_TripleTag_16->SetSelected(pt_jet2_2016_DoubleJet_TripleTag_16);
}
