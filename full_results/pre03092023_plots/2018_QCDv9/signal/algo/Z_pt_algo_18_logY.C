#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_algo_18_logY()
{
//=========Macro generated from canvas: Z_pt_algo_18/Z_pt_algo_18
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_algo_18 = new TCanvas("Z_pt_algo_18", "Z_pt_algo_18",0,0,600,600);
   Z_pt_algo_18->SetHighLightColor(2);
   Z_pt_algo_18->Range(-436.7058,-0.112758,2343.266,0.8268917);
   Z_pt_algo_18->SetFillColor(0);
   Z_pt_algo_18->SetFillStyle(4000);
   Z_pt_algo_18->SetBorderMode(0);
   Z_pt_algo_18->SetBorderSize(2);
   Z_pt_algo_18->SetLogy();
   Z_pt_algo_18->SetLeftMargin(0.15709);
   Z_pt_algo_18->SetRightMargin(0.1234783);
   Z_pt_algo_18->SetBottomMargin(0.12);
   Z_pt_algo_18->SetFrameFillStyle(1000);
   Z_pt_algo_18->SetFrameBorderMode(0);
   Z_pt_algo_18->SetFrameFillStyle(1000);
   Z_pt_algo_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_75 = new TH1F("st_stack_75","",40,0,2000);
   st_stack_75->SetMinimum(-2.217203e+09);
   st_stack_75->SetMaximum(-0.1148888);
   st_stack_75->SetDirectory(0);
   st_stack_75->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_75->SetLineColor(ci);
   st_stack_75->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_75->GetXaxis()->SetRange(7,30);
   st_stack_75->GetXaxis()->SetLabelFont(42);
   st_stack_75->GetXaxis()->SetTitleOffset(1);
   st_stack_75->GetXaxis()->SetTitleFont(42);
   st_stack_75->GetYaxis()->SetTitle("Event/50.0");
   st_stack_75->GetYaxis()->SetLabelFont(42);
   st_stack_75->GetYaxis()->SetTitleSize(0.037);
   st_stack_75->GetYaxis()->SetTitleFont(42);
   st_stack_75->GetZaxis()->SetLabelFont(42);
   st_stack_75->GetZaxis()->SetTitleOffset(1);
   st_stack_75->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_75);
   
   
   TH1D *VbbHcc_algo_Z_pt_stack_1 = new TH1D("VbbHcc_algo_Z_pt_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(1,0.04210634);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(2,0.2055202);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(3,0.5037329);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(4,0.3674161);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(5,0.2189617);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(6,0.1456352);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(7,0.07536035);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(8,0.04507362);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(9,0.02504703);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(10,0.008029787);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(11,0.007599986);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(12,0.001920336);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(13,0.002112291);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(17,0.007176132);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(1,0.009198203);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(2,0.0202558);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(3,0.03226127);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(4,0.03918482);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(5,0.02188098);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(6,0.01787009);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(7,0.01237892);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(8,0.009998088);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(9,0.007167759);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(10,0.004135687);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(11,0.003859744);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(12,0.001920336);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(13,0.002112291);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(17,0.00531138);
   VbbHcc_algo_Z_pt_stack_1->SetEntries(907);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_2 = new TH1D("VbbHcc_algo_Z_pt_stack_2","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(1,0.01177029);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(2,0.05303857);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(3,0.1942926);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(4,0.159228);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(5,0.0821009);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(6,0.03780445);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(7,0.02005628);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(8,0.007569825);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(9,0.003791568);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(10,0.0009965904);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(11,0.0004402636);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(1,0.001763756);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(2,0.003701381);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(3,0.007544442);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(4,0.006864889);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(5,0.004624768);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(6,0.003728223);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(7,0.002279539);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(8,0.001506626);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(9,0.0009901867);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(10,0.0005171557);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(11,0.0003129274);
   VbbHcc_algo_Z_pt_stack_2->SetEntries(2258);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_algo_18->Modified();
   Z_pt_algo_18->cd();
   Z_pt_algo_18->SetSelected(Z_pt_algo_18);
}
