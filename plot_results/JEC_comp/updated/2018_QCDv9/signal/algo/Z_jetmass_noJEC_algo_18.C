#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_algo_18()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_algo_18/Z_jetmass_noJEC_algo_18
//=========  (Thu Mar 23 11:25:14 2023) by ROOT version 6.26/06
   TCanvas *Z_jetmass_noJEC_algo_18 = new TCanvas("Z_jetmass_noJEC_algo_18", "Z_jetmass_noJEC_algo_18",0,0,600,600);
   Z_jetmass_noJEC_algo_18->SetHighLightColor(2);
   Z_jetmass_noJEC_algo_18->Range(-65.50587,-0.03693273,351.4899,0.2708401);
   Z_jetmass_noJEC_algo_18->SetFillColor(0);
   Z_jetmass_noJEC_algo_18->SetFillStyle(4000);
   Z_jetmass_noJEC_algo_18->SetBorderMode(0);
   Z_jetmass_noJEC_algo_18->SetBorderSize(2);
   Z_jetmass_noJEC_algo_18->SetLeftMargin(0.15709);
   Z_jetmass_noJEC_algo_18->SetRightMargin(0.1234783);
   Z_jetmass_noJEC_algo_18->SetBottomMargin(0.12);
   Z_jetmass_noJEC_algo_18->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_algo_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_algo_18->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.2400628);
   
   TH1F *st_stack_187 = new TH1F("st_stack_187","",150,0,300);
   st_stack_187->SetMinimum(0);
   st_stack_187->SetMaximum(0.2400628);
   st_stack_187->SetDirectory(0);
   st_stack_187->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_187->SetLineColor(ci);
   st_stack_187->GetXaxis()->SetTitle("b-jet mass [GeV]");
   st_stack_187->GetXaxis()->SetRange(1,150);
   st_stack_187->GetXaxis()->SetLabelFont(42);
   st_stack_187->GetXaxis()->SetTitleOffset(1);
   st_stack_187->GetXaxis()->SetTitleFont(42);
   st_stack_187->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_187->GetYaxis()->SetLabelFont(42);
   st_stack_187->GetYaxis()->SetTitleSize(0.037);
   st_stack_187->GetYaxis()->SetTitleFont(42);
   st_stack_187->GetZaxis()->SetLabelFont(42);
   st_stack_187->GetZaxis()->SetTitleOffset(1);
   st_stack_187->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_187);
   
   
   TH1D *VbbHcc_algo_Z_jetmass_noJEC_stack_1 = new TH1D("VbbHcc_algo_Z_jetmass_noJEC_stack_1","",150,0,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(3,0.008374889);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(4,0.05038936);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(5,0.104986);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(6,0.1377996);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(7,0.1542482);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(8,0.101101);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(9,0.05179225);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(10,0.0588429);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(11,0.0384291);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(12,0.03022492);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(13,0.01804387);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(14,0.007963553);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(15,0.02523705);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(16,0.005466521);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(17,0.01717776);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(19,0.002434505);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(20,0.002499098);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(21,0.002532203);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(22,0.004242649);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(23,0.002958322);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(25,0.005081805);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(37,0.002397148);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(52,0.002958322);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(3,0.004961883);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(4,0.01197826);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(5,0.01691866);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(6,0.01914797);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(7,0.04394865);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(8,0.01605341);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(9,0.01142607);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(10,0.01207248);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(11,0.01139904);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(12,0.00932693);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(13,0.006878113);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(14,0.004144422);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(15,0.008540237);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(16,0.003957489);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(17,0.007064859);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(19,0.002434505);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(20,0.002499098);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(21,0.002532203);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(22,0.003018647);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(23,0.002958322);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(25,0.003593865);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(37,0.002397148);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(52,0.002958322);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetEntries(320);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_noJEC_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_jetmass_noJEC_stack_2 = new TH1D("VbbHcc_algo_Z_jetmass_noJEC_stack_2","",150,0,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(3,0.001665905);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(4,0.01897212);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(5,0.03500531);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(6,0.04879998);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(7,0.04500389);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(8,0.04278347);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(9,0.02385078);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(10,0.01954606);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(11,0.01065901);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(12,0.008095812);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(13,0.006348784);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(14,0.004660259);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(15,0.003123206);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(16,0.001930034);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(17,0.001909144);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(18,0.003792334);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(19,0.000644648);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(20,0.0003603593);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(22,0.0003105083);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(23,0.0009321947);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(25,0.000280877);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(34,0.0004374943);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(3,0.0008354851);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(4,0.002717306);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(5,0.003654124);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(6,0.004504757);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(7,0.003981235);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(8,0.003826759);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(9,0.002896545);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(10,0.002597316);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(11,0.00189001);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(12,0.001639651);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(13,0.001453997);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(14,0.001261986);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(15,0.001058465);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(16,0.001049705);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(17,0.0008080676);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(18,0.002787223);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(19,0.0004558418);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(20,0.0003603593);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(22,0.0003105083);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(23,0.000541088);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(25,0.000280877);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(34,0.0004374943);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetEntries(817);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_noJEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_noJEC_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_noJEC_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_algo_18->Modified();
   Z_jetmass_noJEC_algo_18->cd();
   Z_jetmass_noJEC_algo_18->SetSelected(Z_jetmass_noJEC_algo_18);
}
