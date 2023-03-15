#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_seljet_18_logY()
{
//=========Macro generated from canvas: H_pt_seljet_18/H_pt_seljet_18
//=========  (Wed Jan 18 11:42:17 2023) by ROOT version 6.26/06
   TCanvas *H_pt_seljet_18 = new TCanvas("H_pt_seljet_18", "H_pt_seljet_18",0,0,600,600);
   H_pt_seljet_18->SetHighLightColor(2);
   H_pt_seljet_18->Range(37.97653,-0.0004042809,1705.96,4.888356);
   H_pt_seljet_18->SetFillColor(0);
   H_pt_seljet_18->SetFillStyle(4000);
   H_pt_seljet_18->SetBorderMode(0);
   H_pt_seljet_18->SetBorderSize(2);
   H_pt_seljet_18->SetLogy();
   H_pt_seljet_18->SetLeftMargin(0.15709);
   H_pt_seljet_18->SetRightMargin(0.1234783);
   H_pt_seljet_18->SetBottomMargin(0.12);
   H_pt_seljet_18->SetFrameFillStyle(1000);
   H_pt_seljet_18->SetFrameBorderMode(0);
   H_pt_seljet_18->SetFrameFillStyle(1000);
   H_pt_seljet_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(15325.32);
   
   TH1F *st_stack_271 = new TH1F("st_stack_271","",40,0,2000);
   st_stack_271->SetMinimum(3.856976);
   st_stack_271->SetMaximum(25088.8);
   st_stack_271->SetDirectory(0);
   st_stack_271->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_271->SetLineColor(ci);
   st_stack_271->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_271->GetXaxis()->SetRange(7,30);
   st_stack_271->GetXaxis()->SetLabelFont(42);
   st_stack_271->GetXaxis()->SetTitleOffset(1);
   st_stack_271->GetXaxis()->SetTitleFont(42);
   st_stack_271->GetYaxis()->SetTitle("Events/50.0");
   st_stack_271->GetYaxis()->SetLabelFont(42);
   st_stack_271->GetYaxis()->SetTitleSize(0.037);
   st_stack_271->GetYaxis()->SetTitleFont(42);
   st_stack_271->GetZaxis()->SetLabelFont(42);
   st_stack_271->GetZaxis()->SetTitleOffset(1);
   st_stack_271->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_271);
   
   
   TH1D *VbbHcc_seljet_H_pt_stack_1 = new TH1D("VbbHcc_seljet_H_pt_stack_1","",40,0,2000);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(1,129.2565);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(2,153.2532);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(3,60.66317);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(4,17.59991);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(5,6.659331);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(6,2.708621);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(7,1.311097);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(8,0.6534884);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(9,0.2536924);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(10,0.133833);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(11,0.07648118);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(12,0.03018411);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(13,0.0286616);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(14,0.008413022);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(15,0.01356996);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(17,0.003517675);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(18,0.002585234);
   VbbHcc_seljet_H_pt_stack_1->SetBinContent(19,0.002177811);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(1,0.5884403);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(2,0.6392207);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(3,0.3994316);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(4,0.214731);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(5,0.1318044);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(6,0.08389437);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(7,0.05782567);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(8,0.04190852);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(9,0.02582176);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(10,0.01804601);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(11,0.01401552);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(12,0.008327967);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(13,0.008820785);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(14,0.004771981);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(15,0.005610843);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(17,0.002965334);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(18,0.002585234);
   VbbHcc_seljet_H_pt_stack_1->SetBinError(19,0.002177811);
   VbbHcc_seljet_H_pt_stack_1->SetEntries(165424);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_pt_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_pt_stack_2 = new TH1D("VbbHcc_seljet_H_pt_stack_2","",40,0,2000);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(1,23.90756);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(2,34.79678);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(3,19.79457);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(4,9.205855);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(5,4.398224);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(6,2.078087);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(7,1.066774);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(8,0.5229438);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(9,0.2884765);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(10,0.1408205);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(11,0.07411822);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(12,0.04831201);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(13,0.02295781);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(14,0.02011141);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(15,0.01307667);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(16,0.007600758);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(17,0.003905878);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(18,0.002044382);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(19,0.001745722);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(20,0.001225052);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(21,0.0007428099);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(22,0.0004650931);
   VbbHcc_seljet_H_pt_stack_2->SetBinContent(25,0.0007672067);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(1,0.09607219);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(2,0.115838);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(3,0.08739418);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(4,0.0595609);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(5,0.04102393);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(6,0.02835797);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(7,0.02055328);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(8,0.01418376);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(9,0.01071885);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(10,0.007321992);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(11,0.005232128);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(12,0.004498421);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(13,0.002947818);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(14,0.002783805);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(15,0.002161872);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(16,0.001749596);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(17,0.001239881);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(18,0.0008514556);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(19,0.0008808984);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(20,0.0007130653);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(21,0.0005252662);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(22,0.0004650931);
   VbbHcc_seljet_H_pt_stack_2->SetBinError(25,0.0005601449);
   VbbHcc_seljet_H_pt_stack_2->SetEntries(280952);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_pt_stack_1","ZHcc","F");

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
   H_pt_seljet_18->Modified();
   H_pt_seljet_18->cd();
   H_pt_seljet_18->SetSelected(H_pt_seljet_18);
}
