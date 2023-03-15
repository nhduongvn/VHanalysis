#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_all_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_all/Aplanarity_algo_all
//=========  (Wed Jan 18 11:42:14 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_all = new TCanvas("Aplanarity_algo_all", "Aplanarity_algo_all",0,0,600,600);
   Aplanarity_algo_all->SetHighLightColor(2);
   Aplanarity_algo_all->Range(-0.2183529,0.5197784,1.171633,2.661442);
   Aplanarity_algo_all->SetFillColor(0);
   Aplanarity_algo_all->SetFillStyle(4000);
   Aplanarity_algo_all->SetBorderMode(0);
   Aplanarity_algo_all->SetBorderSize(2);
   Aplanarity_algo_all->SetLogy();
   Aplanarity_algo_all->SetLeftMargin(0.15709);
   Aplanarity_algo_all->SetRightMargin(0.1234783);
   Aplanarity_algo_all->SetBottomMargin(0.12);
   Aplanarity_algo_all->SetFrameFillStyle(1000);
   Aplanarity_algo_all->SetFrameBorderMode(0);
   Aplanarity_algo_all->SetFrameFillStyle(1000);
   Aplanarity_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(220.7446);
   
   TH1F *st_stack_128 = new TH1F("st_stack_128","",50,0,1);
   st_stack_128->SetMinimum(5.981058);
   st_stack_128->SetMaximum(280.0759);
   st_stack_128->SetDirectory(0);
   st_stack_128->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_128->SetLineColor(ci);
   st_stack_128->GetXaxis()->SetTitle("Aplanarity");
   st_stack_128->GetXaxis()->SetRange(1,50);
   st_stack_128->GetXaxis()->SetLabelFont(42);
   st_stack_128->GetXaxis()->SetTitleOffset(1);
   st_stack_128->GetXaxis()->SetTitleFont(42);
   st_stack_128->GetYaxis()->SetTitle("Events/0.02");
   st_stack_128->GetYaxis()->SetLabelFont(42);
   st_stack_128->GetYaxis()->SetTitleSize(0.037);
   st_stack_128->GetYaxis()->SetTitleFont(42);
   st_stack_128->GetZaxis()->SetLabelFont(42);
   st_stack_128->GetZaxis()->SetTitleOffset(1);
   st_stack_128->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_128);
   
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(1,1.718887);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(2,1.382576);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(3,1.137616);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(4,0.7761791);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(5,0.5326733);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(6,0.4421057);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(7,0.3535988);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(8,0.229554);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(9,0.1617057);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(10,0.1212893);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(11,0.09771869);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(12,0.07153376);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(13,0.03941843);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(14,0.03083704);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(15,0.0172289);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(16,0.01426487);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(17,0.01362419);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(19,0.003464206);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinContent(20,0.003458405);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(1,0.06128573);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(2,0.05476194);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(3,0.04977645);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(4,0.04119726);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(5,0.0344367);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(6,0.03038988);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(7,0.02820327);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(8,0.02269611);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(9,0.01885196);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(10,0.01591638);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(11,0.01455352);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(12,0.01265432);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(13,0.00915527);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(14,0.007646072);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(15,0.006887542);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(16,0.005825541);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(17,0.005239318);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(19,0.002482452);
   VbbHcc_algo_Aplanarity_all_stack_1->SetBinError(20,0.002445874);
   VbbHcc_algo_Aplanarity_all_stack_1->SetEntries(4145);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_all_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(1,0.4885586);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(2,0.3996057);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(3,0.2832431);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(4,0.2144584);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(5,0.1499781);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(6,0.1079432);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(7,0.07513059);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(8,0.05211906);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(9,0.0306512);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(10,0.02217793);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(11,0.01505551);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(12,0.01630686);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(13,0.006775227);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(14,0.00344214);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(15,0.002493259);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(16,0.002202457);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(17,0.0002449609);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(18,0.001212537);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(19,0.000903267);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinContent(20,0.0002140344);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(1,0.01198718);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(2,0.01108253);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(3,0.009045825);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(4,0.008022823);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(5,0.006774504);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(6,0.005682154);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(7,0.004732478);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(8,0.00395931);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(9,0.00300296);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(10,0.00251717);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(11,0.002076809);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(12,0.002211031);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(13,0.001417975);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(14,0.0009492391);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(15,0.0008663108);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(16,0.0008128677);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(17,0.0002449609);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(18,0.0006534921);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(19,0.0005441789);
   VbbHcc_algo_Aplanarity_all_stack_2->SetBinError(20,0.0002140344);
   VbbHcc_algo_Aplanarity_all_stack_2->SetEntries(7685);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_all_stack_1","ZHcc","F");

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
   Aplanarity_algo_all->Modified();
   Aplanarity_algo_all->cd();
   Aplanarity_algo_all->SetSelected(Aplanarity_algo_all);
}
