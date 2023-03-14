#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Mar  9 12:19:51 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2183529,-3.473305,1.171633,0.3728488);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetFillStyle(4000);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15709);
   Aplanarity_both_16->SetRightMargin(0.1234783);
   Aplanarity_both_16->SetBottomMargin(0.12);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_189 = new TH1F("st_stack_189","",50,0,1);
   st_stack_189->SetMinimum(18.57224);
   st_stack_189->SetMaximum(0.9732702);
   st_stack_189->SetDirectory(0);
   st_stack_189->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_189->SetLineColor(ci);
   st_stack_189->GetXaxis()->SetTitle("Aplanarity");
   st_stack_189->GetXaxis()->SetRange(1,50);
   st_stack_189->GetXaxis()->SetLabelFont(42);
   st_stack_189->GetXaxis()->SetTitleOffset(1);
   st_stack_189->GetXaxis()->SetTitleFont(42);
   st_stack_189->GetYaxis()->SetTitle("Event/0.02");
   st_stack_189->GetYaxis()->SetLabelFont(42);
   st_stack_189->GetYaxis()->SetTitleSize(0.037);
   st_stack_189->GetYaxis()->SetTitleFont(42);
   st_stack_189->GetZaxis()->SetLabelFont(42);
   st_stack_189->GetZaxis()->SetTitleOffset(1);
   st_stack_189->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_189);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,0.8518286);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,0.5657799);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,0.4072979);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,0.2548019);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,0.1790524);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,0.1260755);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,0.09043039);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,0.08181681);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,0.04836979);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,0.04121965);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,0.03281825);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,0.01666149);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,0.02285682);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,0.01451332);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,0.00407752);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,0.04196972);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,0.03417377);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,0.02911753);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,0.02282683);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,0.01970084);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,0.01644825);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,0.01379657);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,0.01313684);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,0.01092234);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,0.00951894);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,0.008104441);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,0.005896267);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,0.006896708);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,0.005501185);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,0.002883405);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(1377);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,0.3418185);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,0.2523777);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,0.1755441);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,0.1251262);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,0.08283771);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,0.05599103);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,0.04671506);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,0.02700565);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,0.0179053);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,0.01290806);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,0.007646488);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,0.004922199);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.003714737);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.002006455);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.001131329);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.001108712);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.0002634797);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.0002961461);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.0005497563);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,0.009510972);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,0.008228604);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,0.006853734);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,0.005821513);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,0.00473196);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,0.003888855);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,0.003547402);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.002712562);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.00221006);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.001872291);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.001443909);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.001161743);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.0009608815);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.0007223869);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.0005663055);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.000555156);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.0002634797);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.0002961461);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.0003887364);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(4411);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
