#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tags_all_logY()
{
//=========Macro generated from canvas: Z_pt_tags_all/Z_pt_tags_all
//=========  (Tue Feb 14 10:43:05 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_tags_all = new TCanvas("Z_pt_tags_all", "Z_pt_tags_all",0,0,600,600);
   Z_pt_tags_all->SetHighLightColor(2);
   Z_pt_tags_all->Range(37.97653,0.2540224,1705.96,3.750772);
   Z_pt_tags_all->SetFillColor(0);
   Z_pt_tags_all->SetFillStyle(4000);
   Z_pt_tags_all->SetBorderMode(0);
   Z_pt_tags_all->SetBorderSize(2);
   Z_pt_tags_all->SetLogy();
   Z_pt_tags_all->SetLeftMargin(0.15709);
   Z_pt_tags_all->SetRightMargin(0.1234783);
   Z_pt_tags_all->SetBottomMargin(0.12);
   Z_pt_tags_all->SetFrameFillStyle(1000);
   Z_pt_tags_all->SetFrameBorderMode(0);
   Z_pt_tags_all->SetFrameFillStyle(1000);
   Z_pt_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1739.042);
   
   TH1F *st_stack_12 = new TH1F("st_stack_12","",40,0,2000);
   st_stack_12->SetMinimum(4.716636);
   st_stack_12->SetMaximum(2518.24);
   st_stack_12->SetDirectory(0);
   st_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_12->SetLineColor(ci);
   st_stack_12->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_12->GetXaxis()->SetRange(7,30);
   st_stack_12->GetXaxis()->SetLabelFont(42);
   st_stack_12->GetXaxis()->SetTitleOffset(1);
   st_stack_12->GetXaxis()->SetTitleFont(42);
   st_stack_12->GetYaxis()->SetTitle("Events/50.0");
   st_stack_12->GetYaxis()->SetLabelFont(42);
   st_stack_12->GetYaxis()->SetTitleSize(0.037);
   st_stack_12->GetYaxis()->SetTitleFont(42);
   st_stack_12->GetZaxis()->SetLabelFont(42);
   st_stack_12->GetZaxis()->SetTitleOffset(1);
   st_stack_12->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_12);
   
   
   TH1D *VbbHcc_tags_Z_pt_all_stack_1 = new TH1D("VbbHcc_tags_Z_pt_all_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(1,9.075602);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(2,17.39042);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(3,11.47693);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(4,5.861295);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(5,3.168258);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(6,1.686558);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(7,0.9736694);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(8,0.6210158);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(9,0.2439758);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(10,0.1301235);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(11,0.07247749);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(12,0.03792851);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(13,0.02156317);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(14,0.01782338);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(15,0.009064868);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(16,0.005077553);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(17,0.01333615);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(18,0.001938755);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(26,0.002001313);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinContent(27,0.001842579);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(1,0.1529064);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(2,0.2123358);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(3,0.1696828);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(4,0.1302641);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(5,0.09322409);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(6,0.06609846);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(7,0.04913427);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(8,0.04382741);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(9,0.0243275);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(10,0.01797146);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(11,0.01389888);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(12,0.009731528);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(13,0.007404538);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(14,0.006310305);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(15,0.00457875);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(16,0.003765128);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(17,0.007604797);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(18,0.001938755);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(26,0.002001313);
   VbbHcc_tags_Z_pt_all_stack_1->SetBinError(27,0.001842579);
   VbbHcc_tags_Z_pt_all_stack_1->SetEntries(22839);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_pt_all_stack_2 = new TH1D("VbbHcc_tags_Z_pt_all_stack_2","",40,0,2000);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(1,1.422157);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(2,3.85561);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(3,4.475738);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(4,2.92815);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(5,1.634977);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(6,0.8496032);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(7,0.4080855);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(8,0.2224966);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(9,0.08080177);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(10,0.04223412);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(11,0.01565666);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(12,0.008637013);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(13,0.003393634);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(14,0.002618311);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(15,0.001457121);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(16,0.001692082);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(17,0.0003720141);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(19,0.0009761577);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(21,0.0008932667);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(23,0.0003858223);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinContent(26,0.0002536154);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(1,0.02211609);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(2,0.0379684);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(3,0.04113863);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(4,0.03148314);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(5,0.02303365);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(6,0.01693102);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(7,0.01145266);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(8,0.008553065);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(9,0.004991871);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(10,0.003696035);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(11,0.002238711);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(12,0.00164119);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(13,0.0009874551);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(14,0.0009010378);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(15,0.0006761174);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(16,0.0007609742);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(17,0.0003720141);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(19,0.0005662284);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(21,0.0005276549);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(23,0.0003858223);
   VbbHcc_tags_Z_pt_all_stack_2->SetBinError(26,0.0002536154);
   VbbHcc_tags_Z_pt_all_stack_2->SetEntries(53399);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_pt_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_tags_all->Modified();
   Z_pt_tags_all->cd();
   Z_pt_tags_all->SetSelected(Z_pt_tags_all);
}
