#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_all_logY()
{
//=========Macro generated from canvas: H_pt_tags_all/H_pt_tags_all
//=========  (Tue Feb 14 10:43:06 2023) by ROOT version 6.26/06
   TCanvas *H_pt_tags_all = new TCanvas("H_pt_tags_all", "H_pt_tags_all",0,0,600,600);
   H_pt_tags_all->SetHighLightColor(2);
   H_pt_tags_all->Range(37.97653,0.2528155,1705.96,3.755961);
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
   st->SetMaximum(1756.314);
   
   TH1F *st_stack_16 = new TH1F("st_stack_16","",40,0,2000);
   st_stack_16->SetMinimum(4.711867);
   st_stack_16->SetMaximum(2544.759);
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
   st_stack_16->GetYaxis()->SetTitle("Events/50.0");
   st_stack_16->GetYaxis()->SetLabelFont(42);
   st_stack_16->GetYaxis()->SetTitleSize(0.037);
   st_stack_16->GetYaxis()->SetTitleFont(42);
   st_stack_16->GetZaxis()->SetLabelFont(42);
   st_stack_16->GetZaxis()->SetTitleOffset(1);
   st_stack_16->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_16);
   
   
   TH1D *VbbHcc_tags_H_pt_all_stack_1 = new TH1D("VbbHcc_tags_H_pt_all_stack_1","",40,0,2000);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(1,9.689451);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(2,17.56314);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(3,11.1179);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(4,5.587469);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(5,3.103293);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(6,1.713517);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(7,0.9135492);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(8,0.5024472);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(9,0.2719835);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(10,0.1416255);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(11,0.06382556);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(12,0.04601264);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(13,0.03260978);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(14,0.02735983);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(15,0.006139666);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(16,0.01663409);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(18,0.002873518);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(19,0.004907163);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(20,0.001227937);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(23,0.002930821);
   VbbHcc_tags_H_pt_all_stack_1->SetBinContent(24,0.002001313);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(1,0.1581959);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(2,0.2147448);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(3,0.1673276);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(4,0.1186802);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(5,0.0998026);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(6,0.06896247);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(7,0.04749497);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(8,0.03537184);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(9,0.02648813);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(10,0.01854554);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(11,0.01247203);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(12,0.01096493);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(13,0.008952119);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(14,0.008151018);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(15,0.003852929);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(16,0.00787154);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(18,0.002082033);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(19,0.00357586);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(20,0.001227937);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(23,0.002930821);
   VbbHcc_tags_H_pt_all_stack_1->SetBinError(24,0.002001313);
   VbbHcc_tags_H_pt_all_stack_1->SetEntries(22839);

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
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(1,1.745743);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(2,4.062931);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(3,4.246454);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(4,2.878633);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(5,1.514817);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(6,0.7664579);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(7,0.3709555);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(8,0.1870438);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(9,0.09715338);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(10,0.04694395);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(11,0.01568746);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(12,0.01337959);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(13,0.004018639);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(14,0.003036998);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(15,0.0001561895);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(16,0.0004386855);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(17,0.001019854);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(19,0.0006273928);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(20,0.0004374943);
   VbbHcc_tags_H_pt_all_stack_2->SetBinContent(24,0.0002536154);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(1,0.02472387);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(2,0.03883818);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(3,0.03956812);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(4,0.031505);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(5,0.02250668);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(6,0.01593122);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(7,0.011319);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(8,0.007825603);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(9,0.005551161);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(10,0.003894878);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(11,0.002191556);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(12,0.002059175);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(13,0.001179744);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(14,0.000962755);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(15,0.0001561895);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(16,0.0003171006);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(17,0.0005970768);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(19,0.000455775);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(20,0.0004374943);
   VbbHcc_tags_H_pt_all_stack_2->SetBinError(24,0.0002536154);
   VbbHcc_tags_H_pt_all_stack_2->SetEntries(53399);

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
