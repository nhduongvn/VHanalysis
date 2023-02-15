#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_both_17_logY()
{
//=========Macro generated from canvas: Z_pt_both_17/Z_pt_both_17
//=========  (Tue Feb 14 16:07:56 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_both_17 = new TCanvas("Z_pt_both_17", "Z_pt_both_17",0,0,600,600);
   Z_pt_both_17->SetHighLightColor(2);
   Z_pt_both_17->Range(37.97653,0.389183,1705.96,3.183144);
   Z_pt_both_17->SetFillColor(0);
   Z_pt_both_17->SetFillStyle(4000);
   Z_pt_both_17->SetBorderMode(0);
   Z_pt_both_17->SetBorderSize(2);
   Z_pt_both_17->SetLogy();
   Z_pt_both_17->SetLeftMargin(0.15709);
   Z_pt_both_17->SetRightMargin(0.1234783);
   Z_pt_both_17->SetBottomMargin(0.12);
   Z_pt_both_17->SetFrameFillStyle(1000);
   Z_pt_both_17->SetFrameBorderMode(0);
   Z_pt_both_17->SetFrameFillStyle(1000);
   Z_pt_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(591.5624);
   
   TH1F *st_stack_138 = new TH1F("st_stack_138","",40,0,2000);
   st_stack_138->SetMinimum(5.302226);
   st_stack_138->SetMaximum(801.2122);
   st_stack_138->SetDirectory(0);
   st_stack_138->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_138->SetLineColor(ci);
   st_stack_138->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_138->GetXaxis()->SetRange(7,30);
   st_stack_138->GetXaxis()->SetLabelFont(42);
   st_stack_138->GetXaxis()->SetTitleOffset(1);
   st_stack_138->GetXaxis()->SetTitleFont(42);
   st_stack_138->GetYaxis()->SetTitle("Events/50.0");
   st_stack_138->GetYaxis()->SetLabelFont(42);
   st_stack_138->GetYaxis()->SetTitleSize(0.037);
   st_stack_138->GetYaxis()->SetTitleFont(42);
   st_stack_138->GetZaxis()->SetLabelFont(42);
   st_stack_138->GetZaxis()->SetTitleOffset(1);
   st_stack_138->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_138);
   
   
   TH1D *VbbHcc_both_Z_pt_stack_1 = new TH1D("VbbHcc_both_Z_pt_stack_1","",40,0,2000);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(1,3.079212);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(2,5.915624);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(3,3.956712);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(4,2.040882);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(5,1.165761);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(6,0.5692538);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(7,0.3177437);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(8,0.2128753);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(9,0.09064156);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(10,0.0431603);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(11,0.02319568);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(12,0.01414584);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(13,0.007223961);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(14,0.006756617);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(15,0.006328098);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(16,0.001737085);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(17,0.003684786);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(18,0.001938755);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(26,0.002001313);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(27,0.001842579);
   VbbHcc_both_Z_pt_stack_1->SetBinError(1,0.07662023);
   VbbHcc_both_Z_pt_stack_1->SetBinError(2,0.1062123);
   VbbHcc_both_Z_pt_stack_1->SetBinError(3,0.08631653);
   VbbHcc_both_Z_pt_stack_1->SetBinError(4,0.06199281);
   VbbHcc_both_Z_pt_stack_1->SetBinError(5,0.04669765);
   VbbHcc_both_Z_pt_stack_1->SetBinError(6,0.0329967);
   VbbHcc_both_Z_pt_stack_1->SetBinError(7,0.02430904);
   VbbHcc_both_Z_pt_stack_1->SetBinError(8,0.01981652);
   VbbHcc_both_Z_pt_stack_1->SetBinError(9,0.01287759);
   VbbHcc_both_Z_pt_stack_1->SetBinError(10,0.009132642);
   VbbHcc_both_Z_pt_stack_1->SetBinError(11,0.007370056);
   VbbHcc_both_Z_pt_stack_1->SetBinError(12,0.005036923);
   VbbHcc_both_Z_pt_stack_1->SetBinError(13,0.00368953);
   VbbHcc_both_Z_pt_stack_1->SetBinError(14,0.003392458);
   VbbHcc_both_Z_pt_stack_1->SetBinError(15,0.003670836);
   VbbHcc_both_Z_pt_stack_1->SetBinError(16,0.001737085);
   VbbHcc_both_Z_pt_stack_1->SetBinError(17,0.002608578);
   VbbHcc_both_Z_pt_stack_1->SetBinError(18,0.001938755);
   VbbHcc_both_Z_pt_stack_1->SetBinError(26,0.002001313);
   VbbHcc_both_Z_pt_stack_1->SetBinError(27,0.001842579);
   VbbHcc_both_Z_pt_stack_1->SetEntries(10111);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_both_Z_pt_stack_2 = new TH1D("VbbHcc_both_Z_pt_stack_2","",40,0,2000);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(1,0.4744282);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(2,1.339762);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(3,1.548161);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(4,1.02011);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(5,0.5638258);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(6,0.2805532);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(7,0.1354754);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(8,0.07707246);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(9,0.03018331);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(10,0.01334186);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(11,0.004266958);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(12,0.002640957);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(13,0.002220949);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(14,0.001350269);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(15,0.0004050878);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(16,0.0003143911);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(21,0.0002398048);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(26,0.0002536154);
   VbbHcc_both_Z_pt_stack_2->SetBinError(1,0.01065598);
   VbbHcc_both_Z_pt_stack_2->SetBinError(2,0.01802461);
   VbbHcc_both_Z_pt_stack_2->SetBinError(3,0.01935424);
   VbbHcc_both_Z_pt_stack_2->SetBinError(4,0.01565726);
   VbbHcc_both_Z_pt_stack_2->SetBinError(5,0.01165841);
   VbbHcc_both_Z_pt_stack_2->SetBinError(6,0.008174588);
   VbbHcc_both_Z_pt_stack_2->SetBinError(7,0.005650299);
   VbbHcc_both_Z_pt_stack_2->SetBinError(8,0.004323513);
   VbbHcc_both_Z_pt_stack_2->SetBinError(9,0.002657918);
   VbbHcc_both_Z_pt_stack_2->SetBinError(10,0.001791734);
   VbbHcc_both_Z_pt_stack_2->SetBinError(11,0.00101284);
   VbbHcc_both_Z_pt_stack_2->SetBinError(12,0.0008141768);
   VbbHcc_both_Z_pt_stack_2->SetBinError(13,0.0007514186);
   VbbHcc_both_Z_pt_stack_2->SetBinError(14,0.0005629474);
   VbbHcc_both_Z_pt_stack_2->SetBinError(15,0.0002887157);
   VbbHcc_both_Z_pt_stack_2->SetBinError(16,0.0003143911);
   VbbHcc_both_Z_pt_stack_2->SetBinError(21,0.0002398048);
   VbbHcc_both_Z_pt_stack_2->SetBinError(26,0.0002536154);
   VbbHcc_both_Z_pt_stack_2->SetEntries(23807);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_both_17->Modified();
   Z_pt_both_17->cd();
   Z_pt_both_17->SetSelected(Z_pt_both_17);
}
