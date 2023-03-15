#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_18_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Fri Mar 10 11:27:13 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2183529,-0.5415228,1.171633,1.902927);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetFillStyle(4000);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLogy();
   Aplanarity_tags_18->SetLeftMargin(0.15709);
   Aplanarity_tags_18->SetRightMargin(0.1234783);
   Aplanarity_tags_18->SetBottomMargin(0.12);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(34.8143);
   
   TH1F *st_stack_63 = new TH1F("st_stack_63","",50,0,1);
   st_stack_63->SetMinimum(0.5646914);
   st_stack_63->SetMaximum(45.54934);
   st_stack_63->SetDirectory(0);
   st_stack_63->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_63->SetLineColor(ci);
   st_stack_63->GetXaxis()->SetTitle("Aplanarity");
   st_stack_63->GetXaxis()->SetRange(1,50);
   st_stack_63->GetXaxis()->SetLabelFont(42);
   st_stack_63->GetXaxis()->SetTitleOffset(1);
   st_stack_63->GetXaxis()->SetTitleFont(42);
   st_stack_63->GetYaxis()->SetTitle("Event/0.02");
   st_stack_63->GetYaxis()->SetLabelFont(42);
   st_stack_63->GetYaxis()->SetTitleSize(0.037);
   st_stack_63->GetYaxis()->SetTitleFont(42);
   st_stack_63->GetZaxis()->SetLabelFont(42);
   st_stack_63->GetZaxis()->SetTitleOffset(1);
   st_stack_63->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_63);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,20.73875);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,14.28015);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,9.09218);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,6.045641);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,4.17803);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,3.003555);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,2.058021);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,1.541585);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,1.129527);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,0.9622095);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,0.6311164);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,0.4003572);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,0.3153819);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,0.1648557);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,0.1378084);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,0.06548081);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,0.04360081);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,0.02594502);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(19,0.007918734);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(20,0.01496393);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(21,0.005586222);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(22,0.004416344);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,0.2533568);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,0.2058497);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,0.1640048);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,0.132936);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,0.1101244);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,0.09375449);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,0.0764142);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,0.0663953);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,0.05901931);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,0.1155862);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,0.041552);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,0.03325147);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,0.03076234);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,0.02119565);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,0.01885789);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,0.01300005);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,0.01069485);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,0.008265615);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(19,0.004588597);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(20,0.006751222);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(21,0.00398955);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(22,0.003134241);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(25720);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,8.157118);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,5.699453);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,3.705498);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,2.462465);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,1.616771);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,1.149324);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,0.7667378);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.5374855);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.3691502);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.2677357);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.1864946);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.1261281);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.07540148);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.04869027);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,0.030823);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,0.02004483);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,0.01075523);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,0.005562806);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,0.003403319);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,0.001757269);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(21,0.0003365512);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(22,0.0004309483);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,0.05552757);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,0.04652031);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,0.03697522);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,0.03032983);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.02412342);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.02042959);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.01674782);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.01513065);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.01186087);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.01006196);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.008853995);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.01537262);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.005375947);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.004114015);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,0.00331733);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,0.002665307);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.001995032);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,0.001404682);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,0.001133739);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,0.0008017678);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(21,0.000252521);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(22,0.0004309483);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(74786);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
