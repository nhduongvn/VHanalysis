#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_all_logY()
{
//=========Macro generated from canvas: H_pt_tags_all/H_pt_tags_all
//=========  (Thu Mar  9 12:19:49 2023) by ROOT version 6.26/06
   TCanvas *H_pt_tags_all = new TCanvas("H_pt_tags_all", "H_pt_tags_all",0,0,600,600);
   H_pt_tags_all->SetHighLightColor(2);
   H_pt_tags_all->Range(37.97653,-3.740826,1705.96,0.1053278);
   H_pt_tags_all->SetFillColor(0);
   H_pt_tags_all->SetFillStyle(4000);
   H_pt_tags_all->SetBorderMode(0);
   H_pt_tags_all->SetBorderSize(2);
   H_pt_tags_all->SetLogy();
   H_pt_tags_all->SetLeftMargin(0.15709);
   H_pt_tags_all->SetRightMargin(0.1234783);
   H_pt_tags_all->SetBottomMargin(0.12);
   H_pt_tags_all->SetFrameFillStyle(1000);
   H_pt_tags_all->SetFrameBorderMode(0);
   H_pt_tags_all->SetFrameFillStyle(1000);
   H_pt_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_16 = new TH1F("st_stack_16","",40,0,2000);
   st_stack_16->SetMinimum(23.92849);
   st_stack_16->SetMaximum(0.525669);
   st_stack_16->SetDirectory(0);
   st_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_16->SetLineColor(ci);
   st_stack_16->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_16->GetXaxis()->SetRange(7,30);
   st_stack_16->GetXaxis()->SetLabelFont(42);
   st_stack_16->GetXaxis()->SetTitleOffset(1);
   st_stack_16->GetXaxis()->SetTitleFont(42);
   st_stack_16->GetYaxis()->SetTitle("Event/50.0");
   st_stack_16->GetYaxis()->SetLabelFont(42);
   st_stack_16->GetYaxis()->SetTitleSize(0.037);
   st_stack_16->GetYaxis()->SetTitleFont(42);
   st_stack_16->GetZaxis()->SetLabelFont(42);
   st_stack_16->GetZaxis()->SetTitleOffset(1);
   st_stack_16->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_16);
   
   
   TH1D *VbbHcc_tags_H_pt_all_stack_1 = new TH1D("VbbHcc_tags_H_pt_all_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(1,1.320569);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(2,2.597785);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(3,3.008813);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(4,2.147684);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(5,1.407657);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(6,0.8509203);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(7,0.4973819);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(8,0.2997458);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(9,0.1542293);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(10,0.07901922);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(11,0.03162623);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(12,0.02502196);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(13,0.01206356);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(14,0.006571094);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(15,0.002279941);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(16,0.01059492);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(17,0.002335835);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(18,0.0007817327);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(19,0.003438646);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(20,0.0008604645);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(23,0.002053744);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(24,0.0014024);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(1,0.0488941);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(2,0.07059776);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(3,0.07305743);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(4,0.06148286);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(5,0.05933457);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(6,0.04154473);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(7,0.02929144);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(8,0.02296589);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(9,0.01678735);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(10,0.01161633);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(11,0.007529578);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(12,0.006798035);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(13,0.004643071);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(14,0.003373033);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(15,0.001653713);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(16,0.00541285);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(17,0.002335835);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(18,0.0007817327);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(19,0.002505748);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(20,0.0008604645);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(23,0.002053744);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(24,0.0014024);
   VbbHcc_tags_H_pt_all_stack_1->SetEntries(8003);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_all_stack_1,"");
   
   TH1D *VbbHcc_tags_H_pt_all_stack_2 = new TH1D("VbbHcc_tags_H_pt_all_stack_2","",40,0,2000);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(1,0.4311234);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(2,0.933441);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(3,1.341365);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(4,1.154649);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(5,0.6937064);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(6,0.377594);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(7,0.1878281);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(8,0.1032385);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(9,0.05238146);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(10,0.02445033);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(11,0.009875516);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(12,0.006394356);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(13,0.003099084);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(14,0.001945939);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(16,0.000121096);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(17,0.0002729604);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(19,0.0004396393);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(20,0.0003065698);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(24,0.0001777185);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(1,0.01063641);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(2,0.01467704);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(3,0.01756566);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(4,0.01678225);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(5,0.01280793);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(6,0.009307939);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(7,0.006705338);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(8,0.004874333);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(9,0.003391963);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(10,0.002372713);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(11,0.001467343);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(12,0.001198344);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(13,0.0008511627);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(14,0.0006495699);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(16,0.000121096);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(17,0.0002729604);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(19,0.0003193798);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(20,0.0003065698);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(24,0.0001777185);
   VbbHcc_tags_H_pt_all_stack_2->SetEntries(25459);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_H_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_pt_all_stack_1","ZHcc","F");

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
   H_pt_tags_all->Modified();
   H_pt_tags_all->cd();
   H_pt_tags_all->SetSelected(H_pt_tags_all);
}
